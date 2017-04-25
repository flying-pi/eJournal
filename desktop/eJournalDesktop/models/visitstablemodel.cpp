#include "visitstablemodel.h"
#include "const.h"

VisitsTableModel::VisitsTableModel() {
  students = new QList<StudentModels*>();
}

VisitsTableModel::~VisitsTableModel() {
  // TODO add clearing res
}

void VisitsTableModel::setSearchRequest(QString request) {
  if (request.isEmpty()) {
    students = StudentModels::selectAll();
    collumnName = VisitsModel::getCountDifferentDate();
    visits.clear();
    bool isAdded = false;
    foreach (auto collumn, collumnName) {
      visits.append(new QList<VisitsModel*>());
      auto allExistVisit = VisitsModel::selectForDate(
          QVariant(QDate::fromString(collumn.date, DATE_FORMAT)).toString());
      for (int i = 0; i < students->size(); i++) {
        isAdded = false;
        for (int j = 0; j < allExistVisit->size(); j++) {
          if (students->at(i)->getID() ==
              allExistVisit->at(j)->getstudentID()) {
            visits.last()->append(allExistVisit->at(j));
            allExistVisit->removeAt(j);
            isAdded = true;
            break;
          }
        }
        if (!isAdded)
          visits.last()->append(nullptr);
      }
    }
  }
}

int VisitsTableModel::rowCount(const QModelIndex& parent) const {
  return students->size();
}

int VisitsTableModel::columnCount(const QModelIndex& parent) const {
  return collumnName.size() + 1;
}

QVariant VisitsTableModel::data(const QModelIndex& index, int role) const {
  if (index.column() == 0) {
    return role == Qt::DisplayRole
               ? QVariant(students->at(index.row())->getFullName())
               : QVariant();
  }
  if (role == Qt::EditRole || role == Qt::DisplayRole) {
    auto item = visits.at(index.column() - 1)->at(index.row());
    return QVariant(item == nullptr ? 123 : item->getmark());
  }
  if (role == Qt::ToolTipRole) {
    return QVariant(collumnName[index.column() - 1].toString());
  }
  return QVariant();
}

QVariant VisitsTableModel::headerData(int section,
                                      Qt::Orientation orientation,
                                      int role) const {
  if (orientation == Qt::Horizontal &&
      (role == Qt::DisplayRole || role == Qt::EditRole)) {
    if (section == 0) {
      return QVariant(USER_LABEL);
    }
    return QVariant(collumnName[section - 1].toString());
  } else {
    return QVariant();
  }
}

void VisitsTableModel::addNewDate(QDate date, QString comment) {
  this->collumnName.insert(0, VisitInfo(comment, date.toString(DATE_FORMAT)));
  this->visits.insert(0, new QList<VisitsModel*>());
  for (int i = 0; i < students->size(); i++)
    visits.at(0)->append(nullptr);
}

Qt::ItemFlags VisitsTableModel::flags(const QModelIndex& index) const {
  Qt::ItemFlags result = QAbstractTableModel::flags(index);
  if (index.column() > 0)
    result |= Qt::ItemIsEditable;
  return result;
}

bool VisitsTableModel::setData(const QModelIndex& index,
                               const QVariant& value,
                               int role) {
  VisitsModel* visit = visits.at(index.column() - 1)->at(index.row());
  if (visit == nullptr) {
    visit = new VisitsModel();
    QString dateString = collumnName.at(index.column() - 1).date;
    QDate date = QDate::fromString(dateString, DATE_FORMAT);
    date.toString();
    visit->setstudentID(students->at(index.row())->getID())
        ->setdate(date)
        ->setcomment(collumnName[index.column() - 1].comment);
    visits.at(index.column() - 1)->replace(index.row(), visit);
  }
  visit->setmark(value.toDouble())->writeChanges();
  return true;
}

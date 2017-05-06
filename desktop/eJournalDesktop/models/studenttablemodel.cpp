#include "studenttablemodel.h"
#include <QDebug>

StudentTableModel::StudentTableModel() : QAbstractTableModel() {}

void StudentTableModel::setStudentList(QList<StudentModels*>* students) {
  this->students = students;
  QModelIndex from = this->index(0, 0);
  QModelIndex to = this->index(students->size(), StudentModels::size());
  emit dataChanged(from, to);
}

StudentModels* StudentTableModel::getStudentAt(QModelIndex index) {
  if (index.row() < students->size()) {
    return students->at(index.row());
  }
  return nullptr;
}

int StudentTableModel::rowCount(const QModelIndex& parent) const {
  if (students == nullptr)
    return 0;
  return students->size();
}

int StudentTableModel::columnCount(const QModelIndex& parent) const {
  return StudentModels::size();
}

QVariant StudentTableModel::data(const QModelIndex& index, int role) const {
  if (role == Qt::DisplayRole || role == Qt::ToolTipRole) {
    StudentModels& model = (*students->at(index.row()));
    if (index.column() == 9) {
      return QVariant(StudentModels::RegistrationTypeToString(
          (StudentModels::RegistrationType)model[index.column()].toInt()));
    }
    if (index.column() == 13) {
      return QVariant(StudentModels::SportCategoryToString(
          (StudentModels::SportCategory)model[index.column()].toInt()));
    }
    if (index.column() == 4) {
      return QVariant(
          StudentModels::GenderToString(model[index.column()].toInt()));
    }
    return model[index.column()];
  } else {
    return QVariant();
  }
}

QVariant StudentTableModel::headerData(int section,
                                       Qt::Orientation orientation,
                                       int role) const {
  if (orientation == Qt::Horizontal && role == Qt::DisplayRole) {
    return QVariant(cirilicStudentTableCollumnName[section]);
  } else {
    return QVariant();
  }
}

void StudentTableModel::sort(int column, Qt::SortOrder order) {
  qInfo() << order;
  auto log = qInfo() << "befor sort :: ";
  for (int i = 0; i < students->size(); i++) {
    log << (*(*students)[i])[column].toString();
  }

  bool isSwap;
  for (int i = 0; i < students->size(); i++) {
    for (int j = i + 1; j < students->size(); j++) {
      isSwap = Qt::DescendingOrder == order
                   ? (*(*students)[i])[column] > (*(*students)[j])[column]
                   : (*(*students)[i])[column] < (*(*students)[j])[column];
      if (isSwap) {
        auto buf = (*students)[i];
        (*students)[i] = (*students)[j];
        (*students)[j] = buf;
      }
    }
  }

  log = qInfo() << "after sort :: ";
  for (int i = 0; i < students->size(); i++) {
    log << (*(*students)[i])[column].toString();
  }
  emit layoutChanged();
}

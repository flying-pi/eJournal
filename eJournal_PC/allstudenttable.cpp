#include "allstudenttable.h"
#include <QDebug>
#include <QSqlQuery>
#include "createstudentform.h"
#include "dbsingelton.h"
#include <QVariant>
#include <QSqlError>

AllStudentTable::AllStudentTable(QObject* parent)
    : QAbstractTableModel(parent) {
  DBSingelton::getDBInstance();
  QSqlQuery query;
  query.exec("SELECT * FROM " + StudentField::dbName);
  while (query.next()) {
    StudentModel* newItem = new StudentModel();
    newItem->id = query.value(0).toInt();
    newItem->firstName = query.value(StudentField::firstName).toString();
    newItem->secondName = query.value(StudentField::secondName).toString();
    newItem->fatherName = query.value(StudentField::fatherName).toString();
    newItem->isContract = (query.value(StudentField::isKontract).toInt() != 0);
    newItem->studentBook = query.value(StudentField::studentBook).toString();
    newItem->courceNum = query.value(StudentField::courceNum).toInt();
    newItem->departamentName =
        query.value(StudentField::departamentName).toString();
    newItem->group = query.value(StudentField::group).toString();
    newItem->bodyCheck = query.value(StudentField::bodyCheck).toString();
    newItem->birthday = query.value(StudentField::birthday).toString();
    newItem->sportCategory =
        query.value(StudentField::sportCategory).toString();
    newItem->isMale = query.value(StudentField::isMale).toInt();
    studens.append(newItem);
  }
}

AllStudentTable::~AllStudentTable() {
  for (int i = 0; i < studens.size(); i++)
    delete studens[i];
}

QHash<int, QByteArray> AllStudentTable::roleNames() const {
  static QHash<int, QByteArray>* pHash;
  if (!pHash) {
    pHash = new QHash<int, QByteArray>;
    (*pHash)[FieldRole::firstName] = "firstName";
    (*pHash)[FieldRole::secondName] = "secondName";
    (*pHash)[FieldRole::fatherName] = "fatherName";
    (*pHash)[FieldRole::visits] = "visits";
    (*pHash)[FieldRole::isContract] = "isContract";
    (*pHash)[FieldRole::studentBook] = "studentBook";
    (*pHash)[FieldRole::courceNum] = "courceNum";
    (*pHash)[FieldRole::departamentName] = "departamentName";
    (*pHash)[FieldRole::group] = "group";
    (*pHash)[FieldRole::birthday] = "birthday";
    (*pHash)[FieldRole::bodyCheck] = "bodyCheck";
    (*pHash)[FieldRole::sportCategory] = "sportCategory";
    (*pHash)[FieldRole::isMale] = "isMale";
  }
  return *pHash;
}

void AllStudentTable::onFirstNameChange(int row, QString vale) {
  if (studens.size() <= row)
    return;
  if (studens.at(row)->firstName == vale)
    return;
  studens.at(row)->firstName = vale;
  QSqlQuery query;
  QString queryStr = "UPDATE " + StudentField::dbName + " SET " +
                     StudentField::firstName + " = \'" + vale + "\' WHERE " +
                     StudentField::id + " = " +
                     QString::number(studens.at(row)->id);
  qInfo() << "request to bd :: " << queryStr;
  if (!query.exec(queryStr)) {
    qDebug() << "error in query :: " << queryStr << "\t"
             << query.lastError().text();
  }
}

void AllStudentTable::onSecondNameChange(int row, QString vale) {}

void AllStudentTable::onFatherNameChange(int row, QString vale) {}

void AllStudentTable::onVisitsChanges(int row, int count) {}

void AllStudentTable::onIsContractChange(int row, bool value) {}

void AllStudentTable::onStudentBoockChanged(int row, QString book) {}

void AllStudentTable::onCourceNumChange(int row, int cource) {}

void AllStudentTable::onDepartamentChange(int row, QString departament) {}

void AllStudentTable::onGroupChange(int row, QString group) {}

void AllStudentTable::onBirthdayChange(int row, QString birthday) {}

void AllStudentTable::onBodyCheckChange(int row, QString check) {}

void AllStudentTable::onCategoryChange(int row, int category) {}

void AllStudentTable::onGenderChange(int row, bool isMale) {}

void AllStudentTable::updateStudentInDb(StudentModel* student) {}

int AllStudentTable::rowCount(const QModelIndex& parent) const {
  return studens.size();
}

int AllStudentTable::columnCount(const QModelIndex& parent) const {
  return roleNames().size();
}

QVariant AllStudentTable::data(const QModelIndex& index, int role) const {
  //  qInfo() << index.row() << (role - AllStudentTable::firstName);
  //  if (true)
  //    return "ssds";
  QVariant v;
  StudentModel* newItem = studens.at(index.row());
  switch ((FieldRole)role) {
    case AllStudentTable::firstName:
      return newItem->firstName;
      break;
    case AllStudentTable::secondName:
      return newItem->secondName;
      break;
    case AllStudentTable::fatherName:
      return newItem->fatherName;
      break;
    case AllStudentTable::visits:
      return newItem->visits;
      break;
    case AllStudentTable::isContract:
      return newItem->isContract ? 1 : 0;
      break;
    case AllStudentTable::studentBook:
      return newItem->studentBook;
      break;
    case AllStudentTable::courceNum:
      return newItem->courceNum;
      break;
    case AllStudentTable::departamentName:
      return newItem->departamentName;
      break;
    case AllStudentTable::group:
      return newItem->group;
      break;
    case AllStudentTable::birthday:
      return newItem->birthday;
      break;
    case AllStudentTable::bodyCheck:
      return newItem->bodyCheck;
      break;
    case AllStudentTable::sportCategory:
      return newItem->sportCategory;
      break;
    case AllStudentTable::isMale:
      return newItem->isMale ? 1 : 0;
      break;
  }
  return QVariant();
}

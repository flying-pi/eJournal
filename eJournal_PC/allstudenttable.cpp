#include "allstudenttable.h"
#include <QDebug>
#include <QSqlQuery>
#include "createstudentform.h"
#include "dbsingelton.h"
#include <QVariant>
#include <QSqlError>
#include "const.h"

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
    newItem->visits = query.value(StudentField::visits).toInt();
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

void AllStudentTable::onSecondNameChange(int row, QString vale) {
  if (studens.size() <= row)
    return;
  if (studens.at(row)->secondName == vale)
    return;
  studens.at(row)->secondName = vale;
  QSqlQuery query;
  QString queryStr = "UPDATE " + StudentField::dbName + " SET " +
                     StudentField::secondName + " = \'" + vale + "\' WHERE " +
                     StudentField::id + " = " +
                     QString::number(studens.at(row)->id);
  qInfo() << "request to bd :: " << queryStr;
  if (!query.exec(queryStr)) {
    qDebug() << "error in query :: " << queryStr << "\t"
             << query.lastError().text();
  }
}

void AllStudentTable::onFatherNameChange(int row, QString vale) {
  if (studens.size() <= row)
    return;
  if (studens.at(row)->fatherName == vale)
    return;
  studens.at(row)->fatherName = vale;
  QSqlQuery query;
  QString queryStr = "UPDATE " + StudentField::dbName + " SET " +
                     StudentField::fatherName + " = \'" + vale + "\' WHERE " +
                     StudentField::id + " = " +
                     QString::number(studens.at(row)->id);
  qInfo() << "request to bd :: " << queryStr;
  if (!query.exec(queryStr)) {
    qDebug() << "error in query :: " << queryStr << "\t"
             << query.lastError().text();
  }
}

void AllStudentTable::onVisitsChanges(int row, int count) {
  if (studens.size() <= row)
    return;
  if (studens.at(row)->visits == count)
    return;
  studens.at(row)->visits = count;
  QSqlQuery query;
  QString queryStr = "UPDATE " + StudentField::dbName + " SET " +
                     StudentField::visits + " = \'" + QString::number(count) +
                     "\' WHERE " + StudentField::id + " = " +
                     QString::number(studens.at(row)->id);
  qInfo() << "request to bd :: " << queryStr;
  if (!query.exec(queryStr)) {
    qDebug() << "error in query :: " << queryStr << "\t"
             << query.lastError().text();
  }
}

void AllStudentTable::onIsContractChange(int row, bool value) {
  if (studens.size() <= row)
    return;
  if (studens.at(row)->isContract == (value ? 1 : 0))
    return;
  studens.at(row)->isContract = (value ? 1 : 0);
  QSqlQuery query;
  QString queryStr =
      "UPDATE " + StudentField::dbName + " SET " + StudentField::isKontract +
      " = \'" + QString::number((value ? 1 : 0)) + "\' WHERE " +
      StudentField::id + " = " + QString::number(studens.at(row)->id);
  qInfo() << "request to bd :: " << queryStr;
  if (!query.exec(queryStr)) {
    qDebug() << "error in query :: " << queryStr << "\t"
             << query.lastError().text();
  }
}

void AllStudentTable::onStudentBoockChanged(int row, QString vale) {
  if (studens.size() <= row)
    return;
  if (studens.at(row)->studentBook == vale)
    return;
  studens.at(row)->studentBook = vale;
  QSqlQuery query;
  QString queryStr = "UPDATE " + StudentField::dbName + " SET " +
                     StudentField::studentBook + " = \'" + vale + "\' WHERE " +
                     StudentField::id + " = " +
                     QString::number(studens.at(row)->id);
  qInfo() << "request to bd :: " << queryStr;
  if (!query.exec(queryStr)) {
    qDebug() << "error in query :: " << queryStr << "\t"
             << query.lastError().text();
  }
}

void AllStudentTable::onCourceNumChange(int row, int cource) {
  if (studens.size() <= row)
    return;
  if (studens.at(row)->courceNum == cource)
    return;
  studens.at(row)->courceNum = cource;
  QSqlQuery query;
  QString queryStr = "UPDATE " + StudentField::dbName + " SET " +
                     StudentField::courceNum + " = \'" +
                     QString::number(cource) + "\' WHERE " + StudentField::id +
                     " = " + QString::number(studens.at(row)->id);
  qInfo() << "request to bd :: " << queryStr;
  if (!query.exec(queryStr)) {
    qDebug() << "error in query :: " << queryStr << "\t"
             << query.lastError().text();
  }
}

void AllStudentTable::onDepartamentChange(int row, QString departament) {
  if (studens.size() <= row)
    return;
  if (studens.at(row)->departamentName == departament)
    return;
  studens.at(row)->departamentName = departament;
  QSqlQuery query;
  QString queryStr = "UPDATE " + StudentField::dbName + " SET " +
                     StudentField::departamentName + " = \'" + departament +
                     "\' WHERE " + StudentField::id + " = " +
                     QString::number(studens.at(row)->id);
  qInfo() << "request to bd :: " << queryStr;
  if (!query.exec(queryStr)) {
    qDebug() << "error in query :: " << queryStr << "\t"
             << query.lastError().text();
  }
}

void AllStudentTable::onGroupChange(int row, QString group) {
  if (studens.size() <= row)
    return;
  if (studens.at(row)->group == group)
    return;
  studens.at(row)->group = group;
  QSqlQuery query;
  QString queryStr = "UPDATE " + StudentField::dbName + " SET " +
                     StudentField::group + " = \'" + group + "\' WHERE " +
                     StudentField::id + " = " +
                     QString::number(studens.at(row)->id);
  qInfo() << "request to bd :: " << queryStr;
  if (!query.exec(queryStr)) {
    qDebug() << "error in query :: " << queryStr << "\t"
             << query.lastError().text();
  }
}

void AllStudentTable::onBirthdayChange(int row, QString birthday) {
  if (studens.size() <= row)
    return;
  if (studens.at(row)->birthday == birthday)
    return;
  studens.at(row)->birthday = birthday;
  QSqlQuery query;
  QString queryStr = "UPDATE " + StudentField::dbName + " SET " +
                     StudentField::birthday + " = \'" + birthday + "\' WHERE " +
                     StudentField::id + " = " +
                     QString::number(studens.at(row)->id);
  qInfo() << "request to bd :: " << queryStr;
  if (!query.exec(queryStr)) {
    qDebug() << "error in query :: " << queryStr << "\t"
             << query.lastError().text();
  }
}

void AllStudentTable::onBodyCheckChange(int row, QString check) {
  if (studens.size() <= row)
    return;
  if (studens.at(row)->bodyCheck == check)
    return;
  studens.at(row)->bodyCheck = check;
  QSqlQuery query;
  QString queryStr = "UPDATE " + StudentField::dbName + " SET " +
                     StudentField::bodyCheck + " = \'" + check + "\' WHERE " +
                     StudentField::id + " = " +
                     QString::number(studens.at(row)->id);
  qInfo() << "request to bd :: " << queryStr;
  if (!query.exec(queryStr)) {
    qDebug() << "error in query :: " << queryStr << "\t"
             << query.lastError().text();
  }
}

void AllStudentTable::onCategoryChange(int row, QString category) {
  if (studens.size() <= row)
    return;
  if (studens.at(row)->sportCategory == category)
    return;
  studens.at(row)->sportCategory = category;
  QSqlQuery query;
  QString queryStr = "UPDATE " + StudentField::dbName + " SET " +
                     StudentField::sportCategory + " = \'" + category +
                     "\' WHERE " + StudentField::id + " = " +
                     QString::number(studens.at(row)->id);
  qInfo() << "request to bd :: " << queryStr;
  if (!query.exec(queryStr)) {
    qDebug() << "error in query :: " << queryStr << "\t"
             << query.lastError().text();
  }
}

void AllStudentTable::onGenderChange(int row, bool isMale) {
  if (studens.size() <= row)
    return;
  if (studens.at(row)->isMale == isMale)
    return;
  studens.at(row)->isMale = isMale;
  QSqlQuery query;
  QString queryStr =
      "UPDATE " + StudentField::dbName + " SET " + StudentField::isMale +
      " = \'" + QString::number(isMale ? 1 : 0) + "\' WHERE " +
      StudentField::id + " = " + QString::number(studens.at(row)->id);
  qInfo() << "request to bd :: " << queryStr;
  if (!query.exec(queryStr)) {
    qDebug() << "error in query :: " << queryStr << "\t"
             << query.lastError().text();
  }
}

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
      for (int i = 0; i < sportCategoryList.size(); i++)
        if (newItem->sportCategory == sportCategoryList.at(i))
          return i;
      return 0;
      break;
    case AllStudentTable::isMale:
      return newItem->isMale ? 1 : 0;
      break;
  }
  return QVariant();
}

#include "createstudentform.h"
#include <QDebug>
#include <QSqlQuery>
#include "dbsingelton.h"
#include <QSqlError>

CreateStudentForm::CreateStudentForm(QObject* parent) : QObject(parent) {}

void CreateStudentForm::saveToBD() {
  QSqlQuery query;
  query.prepare(
      "INSERT INTO " + StudentField::dbName + " (" + StudentField::firstName +
      "," + StudentField::secondName + " ," + StudentField::fatherName + " ," +
      StudentField::isKontract + " ," + StudentField::studentBook + "  ," +
      StudentField::courceNum + " ," + StudentField::departamentName + " ," +
      StudentField::group + " ," + StudentField::birthday + " ," +
      StudentField::bodyCheck + " ," + StudentField::isMale + " ," +
      StudentField::visits + ", " + StudentField::sportCategory + ") VALUES"

      + " (?,?,?,?,?,?,?,?,?,?,?,?,?);");

  query.addBindValue(student.firstName);
  query.addBindValue(student.secondName);
  query.addBindValue(student.fatherName);
  query.addBindValue(student.isContract);
  query.addBindValue(student.studentBook);
  query.addBindValue(student.courceNum);
  query.addBindValue(student.departamentName);
  query.addBindValue(student.group);
  query.addBindValue(student.birthday);
  query.addBindValue(student.bodyCheck);
  query.addBindValue(student.isMale);
  query.addBindValue(0);
  query.addBindValue(student.sportCategory);

  qInfo() << "starting executin :: \t " << query.lastQuery();
  if (!query.exec())
    qInfo() << "error when execute query " << query.lastError().text();
  else
    qInfo() << "normal save to bd";
}

void CreateStudentForm::setFirstName(QString firstName) {
  if (student.firstName == firstName)
    return;

  student.firstName = firstName;
  emit firstNameChanged(firstName);
}

void CreateStudentForm::setSecondName(QString secondName) {
  if (student.secondName == secondName)
    return;

  student.secondName = secondName;
  emit secondNameChanged(secondName);
}

void CreateStudentForm::setFatherName(QString fatherName) {
  if (student.fatherName == fatherName)
    return;

  student.fatherName = fatherName;
  emit fatherNameChanged(fatherName);
}

void CreateStudentForm::createNewStudent() {
  DBSingelton::getDBInstance();
  saveToBD();
}

void CreateStudentForm::setIsContract(bool isContract) {
  if (student.isContract == isContract)
    return;

  student.isContract = isContract;
  emit isContractChanged(isContract);
}

void CreateStudentForm::setStudentBook(QString studentBook) {
  if (student.studentBook == studentBook)
    return;

  student.studentBook = studentBook;
  emit studentBookChanged(studentBook);
}

void CreateStudentForm::setCourceNum(int courceNum) {
  if (student.courceNum == courceNum)
    return;

  student.courceNum = courceNum;
  emit courceNumChanged(courceNum);
}

void CreateStudentForm::setDepartamentName(QString departamentName) {
  if (student.departamentName == departamentName)
    return;

  student.departamentName = departamentName;
  emit departamentNameChanged(departamentName);
}

void CreateStudentForm::setGroup(QString group) {
  if (student.group == group)
    return;

  student.group = group;
  emit groupChanged(group);
}

void CreateStudentForm::setBodyCheck(QString bodyCheck) {
  if (student.bodyCheck == bodyCheck)
    return;

  student.bodyCheck = bodyCheck;
  emit bodyCheckChanged(bodyCheck);
}

void CreateStudentForm::setBirthday(QString birthday) {
  if (student.birthday == birthday)
    return;

  student.birthday = birthday;
  emit birthdayChanged(birthday);
}

void CreateStudentForm::setSportCategory(QString sportCategory) {
  if (student.sportCategory == sportCategory)
    return;

  student.sportCategory = sportCategory;
  emit sportCategoryChanged(sportCategory);
}

void CreateStudentForm::setIsMale(bool isMale) {
  if (student.isMale == isMale)
    return;

  student.isMale = isMale;
  emit isMaleChanged(isMale);
}

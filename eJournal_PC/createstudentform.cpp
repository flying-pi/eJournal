#include "createstudentform.h"
#include <QDebug>

CreateStudentForm::CreateStudentForm(QObject* parent) : QObject(parent) {}

void CreateStudentForm::setFirstName(QString firstName) {
  if (m_firstName == firstName)
    return;

  m_firstName = firstName;
  emit firstNameChanged(firstName);
}

void CreateStudentForm::setSecondName(QString secondName) {
  if (m_secondName == secondName)
    return;

  m_secondName = secondName;
  emit secondNameChanged(secondName);
}

void CreateStudentForm::setFatherName(QString fatherName) {
  if (m_fatherName == fatherName)
    return;

  m_fatherName = fatherName;
  emit fatherNameChanged(fatherName);
}

void CreateStudentForm::createNewStudent() {
  qInfo() << m_firstName << m_secondName << m_fatherName;
}

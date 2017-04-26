#include "studentmodels.h"
#include <QMetaMethod>
#include <QMetaProperty>
#include <QDebug>

StudentModels::StudentModels(QObject* parent) : BaseModel(parent) {}

StudentModels* StudentModels::someFun() {
  return this;
}

QString StudentModels::RegistrationTypeToString(
    StudentModels::RegistrationType type) {
  switch (type) {
    case StudentModels::eKharkiv:
      return "Харків";
      break;
    case StudentModels::eKharkivHostel:
      return "Харків,  гуртожиток";
      break;
    case StudentModels::eKharkivRgion:
      return "Харківська область";
      break;
    case StudentModels::eOtherTown:
      return "Інше місто";
      break;
    case StudentModels::eOtherRegistration:
      return "Невідомо";
      break;
    default:
      return "";
  }
}

QString StudentModels::SportCategoryToString(
    StudentModels::SportCategory type) {
  switch (type) {
    case StudentModels::eNone:
      return "Відсутній";
    case StudentModels::eSportMaster:
      return "Мйстер спорту";
    case StudentModels::eCandidateSportMater:
      return "Кандидат в майстри спорту";
    case StudentModels::eCategory1:
      return "Перший розряд";
    case StudentModels::eCategory2:
      return "Другий розряд";
    case StudentModels::eCategory3:
      return "Третій розряд";
    case StudentModels::eOtherSportCategory:
      return "Невідомо";
    default:
      return "";
  }
}

bool StudentModels::convertUserRequestToSql(const QString& userRequest,
                                            QString& outSqlRequest,
                                            QString target) {
  QStringList limitation;
  if (userRequest.contains(DEPARTAMENT_NAME_REQUEST_STRING)) {
    int startIndex = userRequest.indexOf(DEPARTAMENT_NAME_REQUEST_STRING) +
                     DEPARTAMENT_NAME_REQUEST_STRING.length() + 1;
    QString buf = "";
    for (int i = startIndex;
         i < userRequest.length() && userRequest.at(i) != ")"; i++) {
      buf += userRequest.at(i);
    }
    limitation.append("academicGroup LIKE \'%" + buf + "%\'");
    qDebug() << buf;
  }
  if (userRequest.contains(STUDENT_NAME_REQUEST_STRING)) {
    int startIndex = userRequest.indexOf(DEPARTAMENT_NAME_REQUEST_STRING) +
                     DEPARTAMENT_NAME_REQUEST_STRING.length() + 1;
    QString buf = "";
    for (int i = startIndex;
         i < userRequest.length() && userRequest.at(i) != ")"; i++) {
      buf += userRequest.at(i);
    }
    limitation.append("( ( firstName LIKE \'%" + buf +
                      "%\') OR  ( midlName LIKE \'%" + buf +
                      "%\') OR  ( secondName LIKE \'%" + buf + "%\') ) ");
  }
  outSqlRequest =
      "SELECT " + target + " FROM " + StudentModelsTableName + " WHERE ";
  for (int i = 0; i < limitation.size(); i++) {
    outSqlRequest += limitation.at(i);
    if (i < limitation.size() - 1) {
      outSqlRequest += " AND ";
    }
  }
  return true;
}

void StudentModels::updateDataFromSql(QSqlQuery& data) {
  this->firstName = data.value(firstName_FIELD_NAME).toString();
  this->midlName = data.value(midlName_FIELD_NAME).toString();
  this->secondName = data.value(secondName_FIELD_NAME).toString();
  this->bornDate = data.value(bornDate_FIELD_NAME).toDate();
  this->gender = data.value(gender_FIELD_NAME).toInt();
  this->gaderbook = data.value(gaderbook_FIELD_NAME).toString();
  this->academicGroup = data.value(academicGroup_FIELD_NAME).toString();
  this->isContract = data.value(isContract_FIELD_NAME).toBool();
  this->registration =
      (RegistrationType)QMetaEnum::fromType<StudentModels::RegistrationType>()
          .keyToValue(data.value(registration_FIELD_NAME)
                          .toString()
                          .toStdString()
                          .c_str());
  this->telephoneNumbers = data.value(telephoneNumbers_FIELD_NAME).toString();
  this->email = data.value(email_FIELD_NAME).toString();
  this->groupT = data.value(groupT_FIELD_NAME).toString();
  this->sportCategory =
      (SportCategory)QMetaEnum::fromType<StudentModels::SportCategory>()
          .keyToValue(data.value(sportCategory_FIELD_NAME)
                          .toString()
                          .toStdString()
                          .c_str());
  this->additionalInfo = data.value(additionalInfo_FIELD_NAME).toString();
}

QString StudentModels::StudentModelsTableName = "StudentModels";

const QString cirilicStudentTableCollumnName[15] = {"Ім'я",
                                                    "Призвіще",
                                                    "По бітькові",
                                                    "Дата Народження",
                                                    "Стать",
                                                    "Залікова книжка",
                                                    "Академічна група",
                                                    "Чи контракт",
                                                    "Адресса",
                                                    "Місце прописки",
                                                    "Номер телефону",
                                                    "Електронна пошта",
                                                    "Група на секції",
                                                    "Спортивний розряд",
                                                    "Додаткова інформація"};

const QString STUDENT_NAME_REQUEST_STRING = "Ім'я";
const QString DEPARTAMENT_NAME_REQUEST_STRING = "Факультет";

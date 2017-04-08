#include "visitsmodel.h"

VisitsModel::VisitsModel() {}

QString VisitsModel::getDBName() {
  return "VisitsModel";
}

void VisitsModel::updateDataFromSql(QSqlQuery& data) {
  this->date = data.value(date_FIELD_NAME).toDate();
  this->studentID = data.value(studentID_FIELD_NAME).toInt();
  this->isPresent = data.value(isPresent_FIELD_NAME).toBool();
}

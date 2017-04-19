#include "visitsmodel.h"
#include "studentmodels.h"

VisitsModel::VisitsModel() {}

QString VisitsModel::getDBName() {
  return VISIT_MODEL_TABLE_NAME;
}

bool VisitsModel::selectByUserRequst(const QString& userRequest,
                                     QList<VisitsModel*>*& out) {
  QString request;
  if (!StudentModels::convertUserRequestToSql(userRequest, request, " ID "))
    return false;
  out = BaseModel::select<VisitsModel>(
      "SELECT * from VisitsModel WHERE studentID IN ( " + request + " );",
      QVariant());
  return true;
}

QList<VisitsModel*>* VisitsModel::selectAll() {
  return select<VisitsModel>("select * from " + VISIT_MODEL_TABLE_NAME,
                             QList<QVariant>());
}

void VisitsModel::updateDataFromSql(QSqlQuery& data) {
  this->date = data.value(date_FIELD_NAME).toDate();
  this->studentID = data.value(studentID_FIELD_NAME).toInt();
  this->mark = data.value(mark_FIELD_NAME).toDouble();
}

QStringList VisitsModel::getCountDifferentDate() {
  QSqlQuery query;
  // SELECT date from VisitsModel GROUP BY date;
  VisitsModel stuff;
  QStringList result;
  QString stringQuery = "SELECT " + stuff.date_FIELD_NAME + " FROM " +
                        VISIT_MODEL_TABLE_NAME + " GROUP BY " +
                        stuff.date_FIELD_NAME + ";";
  if (!query.exec(stringQuery)) {
    qCritical() << "can not get count of visits day count "
                << "query :: " << stringQuery << " | "
                << query.lastError().text();
    return result;
  }
  while (query.next()) {
    result.append(query.value(0).toString());
  }
  return result;
}

QList<VisitsModel*>* VisitsModel::selectForDate(QString date) {
  VisitsModel stuff;
  return select<VisitsModel>("select * from " + VISIT_MODEL_TABLE_NAME +
                             " where " + stuff.date_FIELD_NAME + " = '" + date +
                             "';");
}

const QString VISIT_MODEL_TABLE_NAME = "VisitsModel";

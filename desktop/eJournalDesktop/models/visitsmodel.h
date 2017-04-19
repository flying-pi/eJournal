#ifndef VISITSMODEL_H
#define VISITSMODEL_H

#include "basemodel.h"
#include <QDate>

extern const QString VISIT_MODEL_TABLE_NAME;

class VisitsModel : public BaseModel {
  Q_OBJECT
 public:
  VisitsModel();

  idSupport(VisitsModel);

  dbField(VisitsModel, QDate, TEXT NOT NULL, date, QDate(1998, 0, 0));
  dbField(VisitsModel, QString, TEXT, comment, "");
  dbField(VisitsModel, int, INTEGER NOT NULL, studentID, -1);
  dbField(VisitsModel, double, REAL NOT NULL, mark, false);

  additionalPArams("UNIQUE(" + date_FIELD_NAME + " , " + studentID_FIELD_NAME +
                       " , " +
                       comment_FIELD_NAME +
                       " ) ON CONFLICT REPLACE",
                   uniqueMarker);

  insertIndexMacrosOperator(3,
                            date,       // 0
                            studentID,  // 1
                            mark);      // 2

  // BaseModel interface
 public:
  virtual QString getDBName() override;

  static bool selectByUserRequst(const QString& userRequest,
                                 QList<VisitsModel*>*& out);

  static QList<VisitsModel*>* selectAll();
  static QStringList getCountDifferentDate();

  static QList<VisitsModel*>* selectForDate(QString date);

 protected:
  virtual void updateDataFromSql(QSqlQuery& data) override;
};

#endif  // VISITSMODEL_H

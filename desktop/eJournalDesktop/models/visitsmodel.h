#ifndef VISITSMODEL_H
#define VISITSMODEL_H

#include "basemodel.h"
#include <QDate>

class VisitsModel : public BaseModel {
  Q_OBJECT
 public:
  VisitsModel();

  idSupport(VisitsModel);

  dbField(VisitsModel, QDate, TEXT NOT NULL, date, QDate(1998, 0, 0));
  dbField(VisitsModel, int, INTEGER NOT NULL, studentID, -1);
  dbField(VisitsModel, bool, INTEGER NOT NULL, isPresent, false);

  insertIndexMacrosOperator(3,
                            date,        // 0
                            studentID,   // 1
                            isPresent);  // 2

  // BaseModel interface
 public:
  virtual QString getDBName() override;

 protected:
  virtual void updateDataFromSql(QSqlQuery& data) override;
};

#endif  // VISITSMODEL_H

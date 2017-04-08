#ifndef DBINITER_H
#define DBINITER_H

#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlRecord>
#include "basemodel.h"
#include "studentmodels.h"
#include "visitsmodel.h"

QSqlError initDB() {
  QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
  db.setDatabaseName("../../../../eJournalFV.db");
  if (!db.open())
    return db.lastError();
  QStringList tables = db.tables();
  QSqlQuery q;
  QList<BaseModel*> models;
  models.append(new StudentModels());
  models.append(new VisitsModel());
  for (int i = 0; i < models.size(); i++) {
    bool isExist = false;
    for (int j = 0; j < tables.size() && (!isExist); j++) {
      isExist = (models.at(i)->getDBName() == tables.at(j));
    }
    if (!isExist) {
      if (!q.exec(models.at(i)->getCreateTableString())) {
        return q.lastError();
      }
    } else {
      // todo
    }
  }

  for (int i = 0; i < models.size(); i++)
    delete models.at(i);

  return QSqlError();
}

#endif  // DBINITER_H

#ifndef DBSINGELTON_H
#define DBSINGELTON_H

#include <QObject>
#include <QSqlDatabase>

namespace StudentField {
extern QString dbName;

extern QString firstName;
extern QString id;
extern QString secondName;
extern QString fatherName;
extern QString isKontract;
extern QString studentBook;
extern QString courceNum;
extern QString departamentName;
extern QString group;
extern QString birthday;
extern QString bodyCheck;
extern QString isMale;
extern QString sportCategory;
extern QString visits;
}

class DBSingelton : public QObject {
  Q_OBJECT
 public:
  inline static DBSingelton* getDBInstance() {
    if (instance == nullptr) {
      instance = new DBSingelton();
    }
    return instance;
  }
  virtual ~DBSingelton();

 private:
  static DBSingelton* instance;
  DBSingelton(QObject* parent = 0);
  QSqlDatabase db;

 signals:

 public slots:
};

#endif  // DBSINGELTON_H

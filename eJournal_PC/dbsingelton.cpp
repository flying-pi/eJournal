#include "dbsingelton.h"
#include <QDebug>
#include <QSqlError>
#include <QSqlQuery>

DBSingelton::~DBSingelton() {}

QString StudentField::dbName = "students";

QString StudentField::firstName = "firstName";
QString StudentField::secondName = "secondName";
QString StudentField::fatherName = "fatherName";
QString StudentField::isKontract = "isKontract";
QString StudentField::studentBook = "studentBook";
QString StudentField::courceNum = "courceNum";
QString StudentField::departamentName = "departamentName";
QString StudentField::group = "groupField";
QString StudentField::birthday = "birthday";
QString StudentField::bodyCheck = "bodyCheck";
QString StudentField::sportCategory = "sportCategory";
QString StudentField::isMale = "isMale";
QString StudentField::visits = "visits";
QString StudentField::id = "ID";

DBSingelton::DBSingelton(QObject* parent) : QObject(parent) {
  db = QSqlDatabase::addDatabase("QSQLITE");
  db.setDatabaseName("/Users/yurabraiko/temp/eJournal.db3");
  //  db.setDatabaseName("./../eJournal.db3");
  db.open();

  if (!db.isOpen())
    qInfo() << "can not open data base " << db.lastError().text();
  else
    qInfo() << "data base is open";

  QString queryString;
  queryString = "create table if not exists " + StudentField::dbName +
                " (ID INTEGER PRIMARY KEY   AUTOINCREMENT, " +
                StudentField::firstName + " TEXT," + StudentField::secondName +
                " TEXT," + StudentField::fatherName + " TEXT," +
                StudentField::isKontract + " INTEGER," +
                StudentField::studentBook + " TEXT," + StudentField::courceNum +
                " INTEGER," + StudentField::departamentName + " TEXT," +
                StudentField::group + " TEXT," + StudentField::birthday +
                " TEXT," + StudentField::bodyCheck + " TEXT," +
                StudentField::isMale + " INTEGER," + StudentField::visits +
                " INTEGER," + StudentField::sportCategory + " TEXT)";

  QSqlQuery query;
  qInfo() << "executing query :: " << queryString;
  if (query.exec(queryString))
    qInfo() << "success exeuting query :: " << queryString;
  else
    qInfo() << "executing error of :: " << queryString << "is "
            << query.lastError().text();
}

DBSingelton* DBSingelton::instance = nullptr;

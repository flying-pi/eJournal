#include "mainwindow.h"
#include <QApplication>
#include <addnewuser.h>
#include <models/studentmodels.h>
#include "models/dbiniter.h"
#include <QDebug>
#include <QStringList>
#include "studentdisplay.h"
#include "models/visitsmodel.h"
#include "visitwindows.h"

StudentModels* stm = StudentModels().someFun();

int main(int argc, char* argv[]) {
  QApplication a(argc, argv);
  QSqlError error = initDB();
  if (error.type() != QSqlError::NoError) {
    qDebug() << error.text();
    return -1;
  }

  /**
   * @brief tests begins
   */

  auto visitsList = VisitsModel::selectForDate("02.10.2012");
  for (int i = 0; i < visitsList->size(); i++) {
    qDebug() << "VisitsModel::selectForDate" << visitsList->at(i)->getID();
  }

  QString userRequest = "Факультет(КН)";
  QString sqlRequest;
  if (StudentModels::convertUserRequestToSql(userRequest, sqlRequest)) {
    qDebug() << sqlRequest;
  } else {
    qDebug() << "Can not convert user request to sql";
  }

  QList<VisitsModel*>* visits = new QList<VisitsModel*>();
  VisitsModel::selectByUserRequst(userRequest, visits);

  StudentModels stm;
  stm.setacademicGroup("test group")
      ->setfirstName("tomy")
      ->setsecondName("torur")
      ->setmidlName("porovich")
      ->setgaderbook("sdkfaklmfsf")
      ->setadress("test adress")
      ->setemail("test mail")
      ->setbornDate(QDate(1998, 1, 9))
      ->setgender(1)
      ->setregistration(StudentModels::eKharkiv)
      ->writeChanges();

  qDebug() << stm[2];

  /**
   * @brief tests end
   */

  //  StudentDisplay w;
  //  AddNewUser w;
  MainWindow w;
  //  VisitWindows w;

  w.show();

  return a.exec();
}

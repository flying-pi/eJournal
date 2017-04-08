#include "mainwindow.h"
#include <QApplication>
#include <addnewuser.h>
#include <models/studentmodels.h>
#include "models/dbiniter.h"
#include <QDebug>
#include <QStringList>
#include "studentdisplay.h"

StudentModels* stm = StudentModels().someFun();

int main(int argc, char* argv[]) {
  QApplication a(argc, argv);
  QSqlError error = initDB();
  if (error.type() != QSqlError::NoError) {
    qDebug() << error.text();
    return -1;
  }

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
  //  StudentDisplay w;
  //  AddNewUser w;
  MainWindow w;

  w.show();

  return a.exec();
}

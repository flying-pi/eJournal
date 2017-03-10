#include "mainwindow.h"
#include <QApplication>
#include <addnewuser.h>

int main(int argc, char* argv[]) {
  QApplication a(argc, argv);
  AddNewUser w;
  w.show();

  return a.exec();
}

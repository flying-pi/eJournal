#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "addnewuser.h"
#include "studentdisplay.h"
#include "visitwindows.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow {
  Q_OBJECT

 public:
  explicit MainWindow(QWidget* parent = 0);
  ~MainWindow();

 private slots:
  void on_pushButton_clicked();

  void on_pushButton_2_clicked();

  void on_visitsTable_clicked();

  void onWindowClose();

 private:
  Ui::MainWindow* ui;
  AddNewUser* newUserWindow = nullptr;
  StudentDisplay* displayAllStudent = nullptr;
  VisitWindows* visitWindows = nullptr;
};

#endif  // MAINWINDOW_H

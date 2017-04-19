#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "addnewuser.h"
#include "studentdisplay.h"

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);
}

MainWindow::~MainWindow() {
  delete ui;
}

void MainWindow::on_pushButton_clicked() {
  if (this->newUserWindow != nullptr) {
    newUserWindow->close();
    newUserWindow->close();
  }
  newUserWindow = new AddNewUser();
  newUserWindow->show();
  connect(newUserWindow, SIGNAL(closeSignal()), this, SLOT(onWindowClose()));
  this->hide();
}

void MainWindow::on_pushButton_2_clicked() {
  if (displayAllStudent != nullptr) {
    delete displayAllStudent;
  }
  displayAllStudent = new StudentDisplay();
  connect(displayAllStudent, SIGNAL(closeSignal()), this,
          SLOT(onWindowClose()));
  displayAllStudent->show();
  this->hide();
}

void MainWindow::on_visitsTable_clicked() {
  if (visitWindows != nullptr) {
    delete visitWindows;
  }
  visitWindows = new VisitWindows();
  connect(visitWindows, SIGNAL(closeSignal()), this, SLOT(onWindowClose()));
  visitWindows->show();
  this->hide();
}

void MainWindow::onWindowClose() {
  this->show();
  if (newUserWindow) {
    delete newUserWindow;
    newUserWindow = nullptr;
  }
  if (displayAllStudent) {
    delete displayAllStudent;
    displayAllStudent = nullptr;
  }
  if (visitWindows) {
    delete visitWindows;
    visitWindows = nullptr;
  }
}

#include "visitwindows.h"
#include "ui_visitwindows.h"
#include "models/studentmodels.h"

VisitWindows::VisitWindows(QWidget* parent)
    : QWidget(parent), ui(new Ui::VisitWindows) {
  ui->setupUi(this);
  visitTableModel = new VisitsTableModel();
  visitTableModel->setSearchRequest("");
  ui->visitTable->setModel(visitTableModel);
}

VisitWindows::~VisitWindows() {
  delete ui;
}

void VisitWindows::on_studentSearchFilter_clicked() {
  appendSearchFilter(STUDENT_NAME_REQUEST_STRING);
}

void VisitWindows::on_departamentSearchFilter_clicked() {
  appendSearchFilter(DEPARTAMENT_NAME_REQUEST_STRING);
}

void VisitWindows::closeEvent(QCloseEvent* event) {
  event->accept();
  emit closeSignal();
}

void VisitWindows::appendSearchFilter(QString filterName) {
  QString request = ui->requestField->text();
  request += " " + filterName + "()";
  ui->requestField->setText(request);
  ui->requestField->setFocus();
  ui->requestField->setCursorPosition(request.length() - 1);
}

void VisitWindows::on_AddNewDateButton_clicked() {}
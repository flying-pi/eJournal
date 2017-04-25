#include "addnewvisitdialog.h"
#include "ui_addnewvisitdialog.h"
#include <QCloseEvent>
#include "const.h"
#include <QMessageBox>

AddNewVisitDialog::AddNewVisitDialog(QWidget* parent)
    : QWidget(parent), ui(new Ui::AddNewVisitDialog) {
  ui->setupUi(this);
  this->adjustSize();
  ui->date->setText(QDate::currentDate().toString(DATE_FORMAT));
}

AddNewVisitDialog::~AddNewVisitDialog() {
  delete ui;
}

void AddNewVisitDialog::closeEvent(QCloseEvent* event) {
  event->accept();
  emit onFormClose();
}

void AddNewVisitDialog::on_addBtn_clicked() {
  QDate date = QDate::fromString(ui->date->text(), DATE_FORMAT);
  if (!date.isValid()) {
    QMessageBox* message = new QMessageBox();
    message->setText("Невірний формат дати");
    message->setDetailedText(
        "Дату слід вказувати в наступному форматі дд.мм.рррр,  "
        "де дд - 2 цифрі,  котрі відповідають за число,  "
        "мм - дві цифри,  потрі відповідають за місяць і "
        "рррр - чотири цифри,  котрі відповідают за рік");
    message->exec();
    return;
  }
  emit onDateCreate(date, ui->comment->text());
  this->close();
}

void AddNewVisitDialog::on_cancelBtn_clicked() {
  this->close();
}

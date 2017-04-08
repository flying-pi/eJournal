#include "addnewuser.h"
#include "ui_addnewuser.h"

AddNewUser::AddNewUser(QWidget* parent)
    : QDialog(parent), ui(new Ui::AddNewUser) {
  ui->setupUi(this);
}

AddNewUser::AddNewUser(StudentModels* student, QWidget* parent)
    : QDialog(parent), ui(new Ui::AddNewUser) {
  ui->setupUi(this);
  this->student = student;
  if (student != nullptr) {
    ui->userName->setText(student->getfirstName());
    ui->userSecondName->setText(student->getsecondName());
    ui->userMidelName->setText(student->getmidlName());
    ui->bornDate->setDate(student->getbornDate());
    ui->genderBox->setCurrentIndex(student->getgender());
    ui->gradebook->setText(student->getgaderbook());
    ui->academicGroup->setText(student->getacademicGroup());
    ui->isContract->setCurrentIndex(student->getisContract());
    ui->address->setText(student->getadress());
    ui->registration->setCurrentIndex(student->getregistration());
    ui->phoneNumbers->setText(student->gettelephoneNumbers());
    ui->email->setText(student->getemail());
    ui->groupT->setText(student->getgroupT());
    ui->sportCategory->setCurrentIndex(student->getsportCategory());
    ui->additionalInfor->document()->setPlainText(student->getadditionalInfo());
  }
}

AddNewUser::~AddNewUser() {
  delete ui;
}

void AddNewUser::on_buttonBox_accepted() {
  if (student == nullptr) {
    student = new StudentModels();
  }
  student->setfirstName(ui->userName->text())
      ->setsecondName(ui->userSecondName->text())
      ->setmidlName(ui->userMidelName->text())
      ->setbornDate(ui->bornDate->date())
      ->setgender(ui->genderBox->currentIndex())
      ->setgaderbook(ui->gradebook->text())
      ->setacademicGroup(ui->academicGroup->text())
      ->setisContract(ui->isContract->currentIndex() == 1)
      ->setadress(ui->address->text())
      ->setregistration(
          (StudentModels::RegistrationType)ui->registration->currentIndex())
      ->settelephoneNumbers(ui->phoneNumbers->text())
      ->setemail(ui->email->text())
      ->setgroupT(ui->groupT->text())
      ->setsportCategory(
          (StudentModels::SportCategory)ui->sportCategory->currentIndex())
      ->setadditionalInfo(ui->additionalInfor->toPlainText())
      ->writeChanges();
}

void AddNewUser::on_buttonBox_rejected() {
  student = nullptr;
  this->close();
}

void AddNewUser::closeEvent(QCloseEvent* event) {
  emit closeSignal();
  event->accept();
}

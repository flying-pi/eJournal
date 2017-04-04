#ifndef ADDNEWUSER_H
#define ADDNEWUSER_H

#include <QDialog>
#include "models/studentmodels.h"

namespace Ui {
class AddNewUser;
}

class AddNewUser : public QDialog {
  Q_OBJECT

 public:
  explicit AddNewUser(QWidget* parent = 0);
  AddNewUser(StudentModels* student, QWidget* parent = 0);
  ~AddNewUser();

 private slots:
  void on_buttonBox_accepted();

  void on_buttonBox_rejected();

 private:
  Ui::AddNewUser* ui;
  StudentModels* student = nullptr;
};

#endif  // ADDNEWUSER_H

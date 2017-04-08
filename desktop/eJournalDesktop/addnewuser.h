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

 signals:

  void closeSignal();

 private slots:
  void on_buttonBox_accepted();

  void on_buttonBox_rejected();

 private:
  Ui::AddNewUser* ui;
  StudentModels* student = nullptr;

  // QWidget interface
 protected:
  virtual void closeEvent(QCloseEvent* event) override;
};

#endif  // ADDNEWUSER_H

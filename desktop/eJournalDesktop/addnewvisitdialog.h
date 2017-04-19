#ifndef ADDNEWVISITDIALOG_H
#define ADDNEWVISITDIALOG_H

#include <QWidget>
#include <QDate>

namespace Ui {
class AddNewVisitDialog;
}

class AddNewVisitDialog : public QWidget {
  Q_OBJECT

 public:
  explicit AddNewVisitDialog(QWidget* parent = 0);
  ~AddNewVisitDialog();

 signals:
  void onDateCreate(QDate date, QString comment);
  void onFormClose();

 protected:
  virtual void closeEvent(QCloseEvent* event) override;

 private slots:
  void on_addBtn_clicked();
  void on_cancelBtn_clicked();

 private:
  Ui::AddNewVisitDialog* ui;
};

#endif  // ADDNEWVISITDIALOG_H

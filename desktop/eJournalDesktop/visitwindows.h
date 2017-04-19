#ifndef VISITWINDOWS_H
#define VISITWINDOWS_H

#include <QWidget>
#include "models/visitstablemodel.h"

namespace Ui {
class VisitWindows;
}

class VisitWindows : public QWidget {
  Q_OBJECT

 public:
  explicit VisitWindows(QWidget* parent = 0);
  ~VisitWindows();

 private slots:
  void on_studentSearchFilter_clicked();
  void on_departamentSearchFilter_clicked();

  void on_AddNewDateButton_clicked();

 signals:

  void closeSignal();

 protected:
  virtual void closeEvent(QCloseEvent* event) override;

 private:
  Ui::VisitWindows* ui;
  void appendSearchFilter(QString filterName);
  VisitsTableModel* visitTableModel = nullptr;
};

#endif  // VISITWINDOWS_H

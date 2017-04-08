#ifndef STUDENTDISPLAY_H
#define STUDENTDISPLAY_H

#include <QWidget>

#include <models/studenttablemodel.h>
#include <Qmenu>

namespace Ui {
class StudentDisplay;
}

class StudentDisplay : public QWidget {
  Q_OBJECT

 public:
  explicit StudentDisplay(QWidget* parent = 0);
  ~StudentDisplay();

 private:
  Ui::StudentDisplay* ui;
  StudentTableModel* studentTableModel;
  QMenu* studentContextMenu = nullptr;
  QAction* editUserAction = nullptr;

  void initMenu();

 signals:

  void closeSignal();

 protected slots:
  void tableContextClick(const QPoint& pos);
  void onStudentEditCall();
 private slots:
  void on_addstudentBtn_clicked();

  // QWidget interface
 protected:
  virtual void closeEvent(QCloseEvent* event) override;
};

#endif  // STUDENTDISPLAY_H

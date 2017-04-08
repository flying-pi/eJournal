#include "studentdisplay.h"
#include "ui_studentdisplay.h"
#include "models/studenttablemodel.h"
#include <QDebug>
#include "addnewuser.h"

StudentDisplay::StudentDisplay(QWidget* parent)
    : QWidget(parent), ui(new Ui::StudentDisplay) {
  ui->setupUi(this);
  initMenu();
  studentTableModel = new StudentTableModel();
  studentTableModel->setStudentList(StudentModels::selectAll());
  ui->students->setModel(studentTableModel);
  ui->students->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
  ui->students->horizontalHeader()->setSectionResizeMode(
      QHeaderView::ResizeToContents);
  ui->students->setContextMenuPolicy(Qt::CustomContextMenu);
  connect(ui->students, SIGNAL(customContextMenuRequested(QPoint)), this,
          SLOT(tableContextClick(QPoint)));
}

StudentDisplay::~StudentDisplay() {
  delete ui;
  delete studentTableModel;
  delete studentContextMenu;
  delete editUserAction;
}

void StudentDisplay::initMenu() {
  studentContextMenu = new QMenu(ui->students);
  editUserAction = new QAction("Редагувати", studentContextMenu);
  connect(editUserAction, SIGNAL(triggered(bool)), this,
          SLOT(onStudentEditCall()));
  studentContextMenu->addAction(editUserAction);
}

void StudentDisplay::tableContextClick(const QPoint& pos) {
  qInfo() << "studen table context click" << pos;
  editUserAction->setData(pos);
  studentContextMenu->exec(this->pos() + ui->students->pos() + pos);
}

void StudentDisplay::onStudentEditCall() {
  const QPoint& clickPos = editUserAction->data().toPoint();
  AddNewUser* newUser = new AddNewUser(
      studentTableModel->getStudentAt(ui->students->indexAt(clickPos)));
  newUser->show();
}

void StudentDisplay::on_addstudentBtn_clicked() {
  AddNewUser* newUser = new AddNewUser();
  newUser->show();
}

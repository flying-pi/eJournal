#ifndef ALLSTUDENTTABLE_H
#define ALLSTUDENTTABLE_H

#include <QObject>
#include <QQmlParserStatus>
#include <QSortFilterProxyModel>
#include "createstudentform.h"
#include "models/studentmodel.h"

class AllStudentTable : public QAbstractTableModel {
  Q_OBJECT

 public:
  explicit AllStudentTable(QObject* parent = 0);
  virtual ~AllStudentTable();
  int rowCount(const QModelIndex& parent) const;
  int columnCount(const QModelIndex& parent) const;
  QVariant data(const QModelIndex& index, int role) const;
  QHash<int, QByteArray> roleNames() const;

  enum FieldRole {
    firstName = Qt::UserRole + 1,
    secondName,
    fatherName,
    visits,
    isContract,
    studentBook,
    courceNum,
    departamentName,
    group,
    birthday,
    bodyCheck,
    sportCategory,
    isMale
  };

 public slots:
  void onFirstNameChange(int row, QString vale);
  void onSecondNameChange(int row, QString vale);
  void onFatherNameChange(int row, QString vale);
  void onVisitsChanges(int row, int count);
  void onIsContractChange(int row, bool value);
  void onStudentBoockChanged(int row, QString book);
  void onCourceNumChange(int row, int cource);
  void onDepartamentChange(int row, QString departament);
  void onGroupChange(int row, QString group);
  void onBirthdayChange(int row, QString birthday);
  void onBodyCheckChange(int row, QString check);
  void onCategoryChange(int row, QString category);
  void onGenderChange(int row, bool isMale);

 private:
  QList<StudentModel*> studens;
  void updateStudentInDb(StudentModel* student);
};

#endif  // ALLSTUDENTTABLE_H

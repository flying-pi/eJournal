#ifndef STUDENTTABLEMODEL_H
#define STUDENTTABLEMODEL_H

#include <QAbstractTableModel>
#include "studentmodels.h"

class StudentTableModel : public QAbstractTableModel {
  Q_OBJECT

 public:
  StudentTableModel();

  void setStudentList(QList<StudentModels*>* students);

  StudentModels* getStudentAt(QModelIndex index);

 public:
  virtual int rowCount(const QModelIndex& parent) const override;
  virtual int columnCount(const QModelIndex& parent) const override;
  virtual QVariant data(const QModelIndex& index, int role) const override;
  virtual QVariant headerData(int section,
                              Qt::Orientation orientation,
                              int role) const override;

 private:
  QList<StudentModels*>* students = nullptr;
};

#endif  // STUDENTTABLEMODEL_H

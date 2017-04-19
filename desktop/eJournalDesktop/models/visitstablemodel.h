#ifndef VISITSTABLEMODEL_H
#define VISITSTABLEMODEL_H

#include <QAbstractTableModel>
#include "models/studentmodels.h"
#include "models/visitsmodel.h"

class VisitsTableModel : public QAbstractTableModel {
  Q_OBJECT
 public:
  VisitsTableModel();
  virtual ~VisitsTableModel();

  void setSearchRequest(QString request);

  // QAbstractItemModel interface
 public:
  virtual int rowCount(const QModelIndex& parent) const override;
  virtual int columnCount(const QModelIndex& parent) const override;
  virtual QVariant data(const QModelIndex& index, int role) const override;
  virtual QVariant headerData(int section,
                              Qt::Orientation orientation,
                              int role) const override;

 private:
  QList<StudentModels*>* students = nullptr;
  QList<QList<VisitsModel*>*> visits;
  QStringList collumnName;

  // QAbstractItemModel interface
 public:
  virtual Qt::ItemFlags flags(const QModelIndex& index) const override;

  // QAbstractItemModel interface
 public:
  virtual bool setData(const QModelIndex& index,
                       const QVariant& value,
                       int role) override;
};

#endif  // VISITSTABLEMODEL_H

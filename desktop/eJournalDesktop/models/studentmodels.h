#ifndef STUDENTMODELS_H
#define STUDENTMODELS_H

#include "basemodel.h"

#include <QObject>
#include <QDate>
#include <QMap>

class StudentModels : public BaseModel {
  Q_OBJECT

 public:
  explicit StudentModels(QObject* parent = 0);

  StudentModels* someFun();
  enum RegistrationType : int {
    eKharkiv = 0,
    eKharkivHostel = 1,
    eKharkivRgion = 2,
    eOther = -1
  };
  Q_ENUM(RegistrationType)

  dbField(StudentModels, QString, TEXT, firstName, "");
  dbField(StudentModels, QString, TEXT, midlName, "");
  dbField(StudentModels, QString, TEXT, secondName, "");
  dbField(StudentModels, QDate, TEXT, bornDate, QDate(1998, 0, 0));
  dbField(StudentModels, int, INTEGER, gender, 1);
  dbField(StudentModels, QString, TEXT, gaderbook, "");
  dbField(StudentModels, QString, TEXT, academicGroup, "");
  dbField(StudentModels, bool, INTEGER, isContract, 1);
  dbField(StudentModels, QString, TEXT, adress, "");
  dbField(StudentModels, RegistrationType, INTEGER, registration, eOther);
  dbField(StudentModels, QString, TEXT, telephoneNumbers, "");
  dbField(StudentModels, QString, TEXT, email, "");
  dbField(StudentModels, QString, TEXT, groupT, "");

 public:
  virtual QString getDBName();
  Q_INVOKABLE void torert();
};

#endif  // STUDENTMODELS_H

#ifndef STUDENTMODEL_H
#define STUDENTMODEL_H

#include <QString>

class StudentModel {
 public:
  StudentModel();
  int id;
  QString firstName = "";
  QString secondName = "";
  QString fatherName = "";
  bool isContract = false;
  QString studentBook = "";
  int courceNum = 1;
  QString departamentName = "";
  QString group = "";
  QString bodyCheck = "";
  QString birthday = "";
  QString sportCategory = "";
  bool isMale = true;
  int visits;
};

#endif  // STUDENTMODEL_H

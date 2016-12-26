#ifndef CREATESTUDENTFOR student.H
#define CREATESTUDENTFOR student.H

#include <QObject>
#include "models/studentmodel.h"

class CreateStudentForm : public QObject {
  Q_OBJECT
  Q_PROPERTY(QString firstName READ firstName WRITE setFirstName NOTIFY
                 firstNameChanged)
  Q_PROPERTY(QString secondName READ secondName WRITE setSecondName NOTIFY
                 secondNameChanged)
  Q_PROPERTY(QString fatherName READ fatherName WRITE setFatherName NOTIFY
                 fatherNameChanged)
  Q_PROPERTY(bool isContract READ isContract WRITE setIsContract NOTIFY
                 isContractChanged)

  Q_PROPERTY(QString studentBook READ studentBook WRITE setStudentBook NOTIFY
                 studentBookChanged)

  Q_PROPERTY(
      int courceNum READ courceNum WRITE setCourceNum NOTIFY courceNumChanged)
  Q_PROPERTY(QString departamentName READ departamentName WRITE
                 setDepartamentName NOTIFY departamentNameChanged)

  Q_PROPERTY(QString group READ group WRITE setGroup NOTIFY groupChanged)

  Q_PROPERTY(
      QString birthday READ birthday WRITE setBirthday NOTIFY birthdayChanged)

  Q_PROPERTY(QString bodyCheck READ bodyCheck WRITE setBodyCheck NOTIFY
                 bodyCheckChanged)

  Q_PROPERTY(QString sportCategory READ sportCategory WRITE setSportCategory
                 NOTIFY sportCategoryChanged)

  Q_PROPERTY(bool isMale READ isMale WRITE setIsMale NOTIFY isMaleChanged)

 protected:
  StudentModel student;

 public:
  explicit CreateStudentForm(QObject* parent = 0);

  QString firstName() const { return student.firstName; }
  QString secondName() const { return student.secondName; }
  QString fatherName() const { return student.fatherName; }
  bool isContract() const { return student.isContract; }
  QString studentBook() const { return student.studentBook; }
  int courceNum() const { return student.courceNum; }
  QString departamentName() const { return student.departamentName; }
  QString group() const { return student.group; }
  QString bodyCheck() const { return student.bodyCheck; }
  QString birthday() const { return student.birthday; }
  QString sportCategory() const { return student.sportCategory; }
  bool isMale() const { return student.isMale; }

  void saveToBD();

 signals:

  void firstNameChanged(QString firstName);
  void secondNameChanged(QString secondName);
  void fatherNameChanged(QString fatherName);
  void isContractChanged(bool isContract);
  void studentBookChanged(QString studentBook);
  void courceNumChanged(int courceNum);
  void departamentNameChanged(QString departamentName);
  void groupChanged(QString group);
  void bodyCheckChanged(QString bodyCheck);
  void birthdayChanged(QString birthday);
  void sportCategoryChanged(QString sportCategory);
  void isMaleChanged(bool isMale);

 public slots:
  void setFirstName(QString firstName);
  void setSecondName(QString secondName);
  void setFatherName(QString fatherName);
  void setIsContract(bool isContract);
  void setStudentBook(QString studentBook);
  void setCourceNum(int courceNum);
  void setDepartamentName(QString departamentName);
  void setGroup(QString group);
  void setBodyCheck(QString bodyCheck);
  void setBirthday(QString birthday);
  void setSportCategory(QString sportCategory);
  void setIsMale(bool isMale);

  void createNewStudent();
};

#endif  // CREATESTUDENTFOR student.H

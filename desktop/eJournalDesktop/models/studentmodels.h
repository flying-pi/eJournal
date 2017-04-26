#ifndef STUDENTMODELS_H
#define STUDENTMODELS_H

#include "basemodel.h"

#include <QObject>
#include <QDate>
#include <QMap>

extern const QString cirilicStudentTableCollumnName[15];

extern const QString STUDENT_NAME_REQUEST_STRING;
extern const QString DEPARTAMENT_NAME_REQUEST_STRING;

class StudentModels : public BaseModel {
  Q_OBJECT

 private:
  static QString StudentModelsTableName;

 public:
  explicit StudentModels(QObject* parent = 0);

  StudentModels* someFun();

  enum RegistrationType : int {
    eKharkiv = 0,
    eKharkivHostel = 1,
    eKharkivRgion = 2,
    eOtherTown = 3,
    eOtherRegistration = -1
  };
  enum SportCategory : int {
    eNone = 0,
    eSportMaster = 1,
    eCandidateSportMater = 2,
    eCategory1 = 3,
    eCategory2 = 4,
    eCategory3 = 5,
    eOtherSportCategory = -1
  };
  Q_ENUM(RegistrationType)
  Q_ENUM(SportCategory)

  static QString RegistrationTypeToString(RegistrationType type);

  static QString SportCategoryToString(SportCategory type);

  static QString GenderToString(int gender) {
    if (gender == 1) {
      return "Чоловіча";
    } else {
      return " Жіноча";
    }
  }

  idSupport(StudentModels);

  dbField(StudentModels, QString, TEXT NOT NULL, firstName, "");
  dbField(StudentModels, QString, TEXT NOT NULL, midlName, "");
  dbField(StudentModels, QString, TEXT, secondName, "");
  dbField(StudentModels, QDate, TEXT, bornDate, QDate(1998, 0, 0));
  dbField(StudentModels, int, INTEGER, gender, 1);
  dbField(StudentModels, QString, TEXT NOT NULL UNIQUE, gaderbook, "");
  dbField(StudentModels, QString, TEXT NOT NULL, academicGroup, "");
  dbField(StudentModels, bool, INTEGER, isContract, 1);
  dbField(StudentModels, QString, TEXT, adress, "");
  dbField(StudentModels,
          RegistrationType,
          INTEGER,
          registration,
          RegistrationType::eOtherRegistration);
  dbField(StudentModels, QString, TEXT, telephoneNumbers, "");
  dbField(StudentModels, QString, TEXT, email, "");
  dbField(StudentModels, QString, TEXT, groupT, "");
  dbField(StudentModels,
          SportCategory,
          INTEGER,
          sportCategory,
          SportCategory::eOtherSportCategory);
  dbField(StudentModels, QString, TEXT, additionalInfo, "");

  insertIndexMacrosOperator(15,
                            firstName,         // 0
                            midlName,          // 1
                            secondName,        // 2
                            bornDate,          // 3
                            gender,            // 4
                            gaderbook,         // 5
                            academicGroup,     // 6
                            isContract,        // 7
                            adress,            // 8
                            registration,      // 9
                            telephoneNumbers,  // 10
                            email,             // 11
                            groupT,            // 12
                            sportCategory,     // 13
                            additionalInfo);   // 14

 public:
  virtual QString getDBName() { return StudentModelsTableName; }

  static QList<StudentModels*>* selectAll() {
    return selectByRequest("select * from " +
                           StudentModels::StudentModelsTableName);
  }

  static bool convertUserRequestToSql(const QString& userRequest,
                                      QString& outSqlRequest,
                                      QString target = "*");

  inline QString getFullName() {
    return getfirstName() + " " + getsecondName();
  }

  static QList<StudentModels*>* selectByRequest(QString request) {
    return select<StudentModels>(request);
  }

  // BaseModel interface
 protected:
  virtual void updateDataFromSql(QSqlQuery& data) override;
};

#endif  // STUDENTMODELS_H

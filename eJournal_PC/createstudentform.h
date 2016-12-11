#ifndef CREATESTUDENTFORM_H
#define CREATESTUDENTFORM_H

#include <QObject>

class CreateStudentForm : public QObject {
  Q_OBJECT
  Q_PROPERTY(QString firstName READ firstName WRITE setFirstName NOTIFY
                 firstNameChanged)
  Q_PROPERTY(QString secondName READ secondName WRITE setSecondName NOTIFY
                 secondNameChanged)
  Q_PROPERTY(QString fatherName READ fatherName WRITE setFatherName NOTIFY
                 fatherNameChanged)

  QString m_firstName;
  QString m_secondName;
  QString m_fatherName;

 public:
  explicit CreateStudentForm(QObject* parent = 0);

  QString firstName() const { return m_firstName; }
  QString secondName() const { return m_secondName; }
  QString fatherName() const { return m_fatherName; }

 signals:

  void firstNameChanged(QString firstName);
  void secondNameChanged(QString secondName);
  void fatherNameChanged(QString fatherName);

 public slots:
  void setFirstName(QString firstName);
  void setSecondName(QString secondName);
  void setFatherName(QString fatherName);

  void createNewStudent();
};

#endif  // CREATESTUDENTFORM_H

#ifndef BASEMODEL_H
#define BASEMODEL_H

#include <QObject>
#include <QMap>
#include <QVariant>
#include <QList>;

#define dbField(modelName, type, dbType, varName, defaultValue, ...) \
 private:                                                            \
  type varName = defaultValue;                                       \
                                                                     \
 public:                                                             \
  modelName* set##varName(type var) {                                \
    request.insert(#varName, QVariant::fromValue(var));              \
    this->varName = var;                                             \
    return this;                                                     \
  }                                                                  \
                                                                     \
  type get##varName() { return varName; }                            \
                                                                     \
 private:                                                            \
  Q_INVOKABLE QString information##varName() { return #dbType; }

//#define createTable(modelName)

class BaseModel : public QObject {
 public:
  Q_OBJECT
 public:
  explicit BaseModel(QObject* parent = 0);
  virtual QString getDBName();
  QString getCreateTableString();
  void writeChanges();

 protected:
  QMap<QString, QVariant> request;
};

#endif  // BASEMODEL_H

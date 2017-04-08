#ifndef BASEMODEL_H
#define BASEMODEL_H

#include <QObject>
#include <QMap>
#include <QVariant>
#include <QList>;
#include <QSqlQuery>
#include "insertindexmacrosoperatorinbasemodel.h"
#include <QSqlError>
#include <QDebug>

#define dbField(modelName, type, dbType, varName, defaultValue, ...) \
 protected:                                                          \
  type varName = defaultValue;                                       \
  const QString varName##_FIELD_NAME = #varName;                     \
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

#define idSupport(modelNameClass)                      \
 protected:                                            \
  virtual bool isHaveID() { return true; }             \
                                                       \
 private:                                              \
  Q_INVOKABLE QString informationID() {                \
    return "INTEGER PRIMARY KEY AUTOINCREMENT";        \
  }                                                    \
                                                       \
 public:                                               \
  static QList<modelNameClass*>* selectByID(int id) {  \
    return select<modelNameClass>("ID", QVariant(id)); \
  }                                                    \
  int getID() { return ID; }

#define insertIndexMacrosOperator(count, ...)      \
 public:                                           \
  QVariant operator[](const int index) {           \
    insertIndexMacrosOperator##count(__VA_ARGS__); \
  }                                                \
  static int size() { return count; }

class BaseModel : public QObject {
 public:
  Q_OBJECT
 public:
  explicit BaseModel(QObject* parent = 0);
  virtual QString getDBName();
  QString getCreateTableString();
  void writeChanges();
  static BaseModel* selectByID();

 protected:
  QMap<QString, QVariant> request;
  virtual bool isHaveID() { return false; }
  virtual void updateDataFromSql(QSqlQuery& data) = 0;
  int ID;

  template <typename T>
  static QList<T*>* select(QString request, QList<QVariant> data) {
    QSqlQuery query;
    QList<T*>* result = new QList<T*>();
    if (!query.prepare(request))
      qCritical() << query.lastError().text();
    for (int i = 0; i < data.size(); i++)
      query.bindValue(i, data.at(i));
    if (!query.exec()) {
      qCritical() << query.lastError().text();
    } else {
      while (query.next()) {
        BaseModel* newItem = new T();
        result->append((T*)newItem);
        newItem->updateDataFromSql(query);
        if (newItem->isHaveID()) {
          newItem->ID = query.value("ID").toInt();
        }
      }
    }
    return result;
  }

  template <typename T>
  static QList<T*>* select(QString request, QVariant data) {
    QList<QVariant> dataList;
    dataList.append(data);
    return select<T>(request, dataList);
  }

  template <typename T>
  QList<T*>* selectAll() {
    return select<T>("", QList<QVariant>());
  }
};

#endif  // BASEMODEL_H

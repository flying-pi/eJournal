#include "basemodel.h"
#include <QMetaMethod>
#include <QDebug>
#include <QStringList>
#include <QStringBuilder>
#include <QSqlQuery>
#include <QSqlError>

BaseModel::BaseModel(QObject* parent) : QObject(parent) {}

QString BaseModel::getDBName() {
  return "";
}

QString BaseModel::getCreateTableString() {
  QString result = "create table " + getDBName() + " (";
  QList<QString> puts;
  for (int i = 0; i < this->metaObject()->methodCount(); i++) {
    QMetaMethod method = this->metaObject()->method(i);
    QString methodName = QString(method.name());
    if (!methodName.startsWith("information"))
      continue;

    QString methodResult = "";
    method.invoke(this, Qt::DirectConnection,
                  Q_RETURN_ARG(QString, methodResult));
    puts.append(methodName.replace("information", ""));
    puts.append(methodResult);
  }

  for (int i = 0; i < puts.size(); i += 2) {
    result.append(" ").append(puts.at(i)).append(" ").append(puts.at(i + 1));
    if (i != puts.length() - 2)
      result.append(",");
  }
  result.append(")");
  qDebug() << result;
  return result;
}

void BaseModel::writeChanges() {
  if (request.size() == 0)
    return;
  QSqlQuery q;
  QString requestString;

  QList<QString> keys = request.keys();

  if (isHaveID() && ID > 0) {
    requestString = " UPDATE ";
    requestString += getDBName();
    requestString += " SET ";
    for (int i = 0; i < keys.size(); i++) {
      requestString.append(keys.at(i));
      requestString.append(" = ?");
      if (i != keys.size() - 1)
        requestString.append(", ");
    }

    requestString.append(" WHERE ID = ").append(QString::number(ID));
  } else {
    requestString = "insert into ";
    requestString += getDBName() + " (";
    QString value = "";
    for (int i = 0; i < keys.size(); i++) {
      requestString.append(keys.at(i));
      value.append("?");
      if (i != keys.size() - 1) {
        requestString.append(", ");
        value.append(", ");
      }
    }

    requestString.append(")values (").append(value).append(")");
  }
  qDebug() << requestString;
  if (!q.prepare(requestString)) {
    qCritical() << q.lastError();
    request.clear();
    return;
  }
  for (int i = 0; i < keys.size(); i++)
    q.addBindValue(request.take(keys.at(i)));

  qInfo() << q.executedQuery();

  if (!q.exec())
    qCritical() << q.lastError();

  qInfo() << "success insert changes";

  request.clear();
}

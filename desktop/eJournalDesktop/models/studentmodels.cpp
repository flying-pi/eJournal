#include "studentmodels.h"
#include <QMetaMethod>
#include <QMetaProperty>
#include <QDebug>

StudentModels::StudentModels(QObject* parent) : BaseModel(parent) {
  torert();
}

void StudentModels::torert() {}

StudentModels* StudentModels::someFun() {
  return this;
}

QString StudentModels::getDBName() {
  return "StudentModels";
}

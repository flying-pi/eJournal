#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "createstudentform.h"
#include "allstudenttable.h"

int main(int argc, char* argv[]) {
  qmlRegisterType<CreateStudentForm>("com.hpi.ejournal.CreateStudentForm", 1, 0,
                                     "CreateStudentForm");

  qmlRegisterType<AllStudentTable>("com.hpi.ejournal.AllStudentTable", 1, 0,
                                   "AllStudentTable");

  QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

  QGuiApplication app(argc, argv);

  QQmlApplicationEngine engine;
  engine.load(QUrl(QLatin1String("qrc:/main.qml")));

  return app.exec();
}

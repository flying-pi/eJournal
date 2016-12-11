#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "createstudentform.h"

int main(int argc, char* argv[]) {
  QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

  qmlRegisterType<CreateStudentForm>("com.hpi.ejournal", 1, 0,
                                     "CreateStudentForm");

  QGuiApplication app(argc, argv);

  QQmlApplicationEngine engine;
  engine.load(QUrl(QLatin1String("qrc:/main.qml")));
  CreateStudentForm form;

  return app.exec();
}

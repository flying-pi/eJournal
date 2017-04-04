#include <QCoreApplication>
#include <QDebug>
#include <qfile.h>


QString generateForModelIndexMacros(int count, QString varName) {
  QString result = "";

  for (int i = 1; i < count; i++) {
    result += "#define insertIndexMacrosOperator" + QString::number(i);
    result += "(";
    for (int v = 1; v <= i; v++) {
      result += "v" + QString::number(v);
      if (v < i)
        result += ",";
    }
    result += ") ";
    result += "if(";
    result += varName;
    result += " == ";
    result += QString::number(i - 1);
    result += "){";
    result += "return QVariant(v" + QString::number(i) + ");}";
    if (i > 1) {
      result += "insertIndexMacrosOperator" + QString::number(i - 1) + "(";
      for (int v = 1; v < i; v++) {
        result += "v" + QString::number(v);
        if (v < i - 1)
          result += ",";
      }
      result += ");";
    }
    result += "\n\n";
  }
  return result;
}

int main(int argc, char* argv[]) {
  QString filename = "Data.txt";
  QFile file("./out.h");
  if (file.open(QIODevice::ReadWrite)) {
    QTextStream stream(&file);
    stream << generateForModelIndexMacros(100, "index") << endl;
    file.close();
  }
  qDebug() << generateForModelIndexMacros(100, "index");
}

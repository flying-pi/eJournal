QT += qml quick sql

CONFIG += c++14

SOURCES += main.cpp \
    createstudentform.cpp \
    dbsingelton.cpp \
    models/studentmodel.cpp \
    allstudenttable.cpp


RESOURCES += qml.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    createstudentform.h \
    dbsingelton.h \
    models/studentmodel.h \
    allstudenttable.h \
    const.h

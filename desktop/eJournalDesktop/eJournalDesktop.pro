#-------------------------------------------------
#
# Project created by QtCreator 2017-03-10T09:10:46
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = eJournalDesktop
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        mainwindow.cpp \
    addnewuser.cpp \
    models/studentmodels.cpp \
    models/basemodel.cpp \
    models/studenttablemodel.cpp \
    studentdisplay.cpp \
    models/visitsmodel.cpp \
    visitwindows.cpp \
    models/visitstablemodel.cpp \
    const.cpp \
    addnewvisitdialog.cpp

HEADERS  += mainwindow.h \
    addnewuser.h \
    models/studentmodels.h \
    models/basemodel.h \
    models/dbiniter.h \
    models/studenttablemodel.h \
    models/insertindexmacrosoperatorinbasemodel.h \
    studentdisplay.h \
    models/visitsmodel.h \
    visitwindows.h \
    models/visitstablemodel.h \
    const.h \
    addnewvisitdialog.h

FORMS    += mainwindow.ui \
    addnewuser.ui \
    studentdisplay.ui \
    visitwindows.ui \
    addnewvisitdialog.ui

DISTFILES += \
    todolist

/********************************************************************************
** Form generated from reading UI file 'studentdisplay.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTDISPLAY_H
#define UI_STUDENTDISPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StudentDisplay
{
public:
    QGridLayout *gridLayout;
    QTableView *students;

    void setupUi(QWidget *StudentDisplay)
    {
        if (StudentDisplay->objectName().isEmpty())
            StudentDisplay->setObjectName(QStringLiteral("StudentDisplay"));
        StudentDisplay->resize(640, 480);
        gridLayout = new QGridLayout(StudentDisplay);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        students = new QTableView(StudentDisplay);
        students->setObjectName(QStringLiteral("students"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(students->sizePolicy().hasHeightForWidth());
        students->setSizePolicy(sizePolicy);
        students->setEditTriggers(QAbstractItemView::NoEditTriggers);
        students->setProperty("showDropIndicator", QVariant(false));
        students->setDragEnabled(false);
        students->setDragDropOverwriteMode(false);
        students->setDragDropMode(QAbstractItemView::NoDragDrop);
        students->setDefaultDropAction(Qt::IgnoreAction);
        students->setAlternatingRowColors(true);
        students->setSelectionMode(QAbstractItemView::NoSelection);
        students->setSelectionBehavior(QAbstractItemView::SelectRows);
        students->setTextElideMode(Qt::ElideLeft);
        students->setGridStyle(Qt::DashLine);
        students->setSortingEnabled(true);
        students->setCornerButtonEnabled(true);
        students->horizontalHeader()->setCascadingSectionResizes(true);
        students->verticalHeader()->setCascadingSectionResizes(true);

        gridLayout->addWidget(students, 0, 0, 1, 1);


        retranslateUi(StudentDisplay);

        QMetaObject::connectSlotsByName(StudentDisplay);
    } // setupUi

    void retranslateUi(QWidget *StudentDisplay)
    {
        StudentDisplay->setWindowTitle(QApplication::translate("StudentDisplay", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class StudentDisplay: public Ui_StudentDisplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTDISPLAY_H

/********************************************************************************
** Form generated from reading UI file 'visitwindows.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VISITWINDOWS_H
#define UI_VISITWINDOWS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VisitWindows
{
public:
    QGridLayout *gridLayout;
    QTableView *visitTable;
    QLineEdit *requestField;
    QHBoxLayout *horizontalLayout;
    QPushButton *studentSearchFilter;
    QPushButton *departamentSearchFilter;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *AddNewDateButton;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *VisitWindows)
    {
        if (VisitWindows->objectName().isEmpty())
            VisitWindows->setObjectName(QStringLiteral("VisitWindows"));
        VisitWindows->resize(640, 480);
        gridLayout = new QGridLayout(VisitWindows);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        visitTable = new QTableView(VisitWindows);
        visitTable->setObjectName(QStringLiteral("visitTable"));
        visitTable->setEditTriggers(QAbstractItemView::AllEditTriggers);

        gridLayout->addWidget(visitTable, 3, 0, 1, 1);

        requestField = new QLineEdit(VisitWindows);
        requestField->setObjectName(QStringLiteral("requestField"));

        gridLayout->addWidget(requestField, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        studentSearchFilter = new QPushButton(VisitWindows);
        studentSearchFilter->setObjectName(QStringLiteral("studentSearchFilter"));

        horizontalLayout->addWidget(studentSearchFilter);

        departamentSearchFilter = new QPushButton(VisitWindows);
        departamentSearchFilter->setObjectName(QStringLiteral("departamentSearchFilter"));

        horizontalLayout->addWidget(departamentSearchFilter);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        AddNewDateButton = new QPushButton(VisitWindows);
        AddNewDateButton->setObjectName(QStringLiteral("AddNewDateButton"));

        horizontalLayout_2->addWidget(AddNewDateButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);


        retranslateUi(VisitWindows);

        QMetaObject::connectSlotsByName(VisitWindows);
    } // setupUi

    void retranslateUi(QWidget *VisitWindows)
    {
        VisitWindows->setWindowTitle(QApplication::translate("VisitWindows", "Form", Q_NULLPTR));
        studentSearchFilter->setText(QApplication::translate("VisitWindows", "\320\241\321\202\321\203\320\264\320\265\320\275\321\202", Q_NULLPTR));
        departamentSearchFilter->setText(QApplication::translate("VisitWindows", "\320\244\320\260\320\272\321\203\320\273\321\214\321\202\320\265\321\202", Q_NULLPTR));
        AddNewDateButton->setText(QApplication::translate("VisitWindows", "\320\224\320\276\320\264\320\260\321\202\320\270 \320\275\320\276\320\262\321\203 \320\264\320\260\321\202\321\203 ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VisitWindows: public Ui_VisitWindows {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VISITWINDOWS_H

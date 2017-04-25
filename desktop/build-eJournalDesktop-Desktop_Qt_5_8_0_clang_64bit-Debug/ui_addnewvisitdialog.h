/********************************************************************************
** Form generated from reading UI file 'addnewvisitdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDNEWVISITDIALOG_H
#define UI_ADDNEWVISITDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddNewVisitDialog
{
public:
    QGridLayout *gridLayout;
    QLineEdit *comment;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *date;
    QHBoxLayout *horizontalLayout;
    QPushButton *addBtn;
    QPushButton *cancelBtn;

    void setupUi(QWidget *AddNewVisitDialog)
    {
        if (AddNewVisitDialog->objectName().isEmpty())
            AddNewVisitDialog->setObjectName(QStringLiteral("AddNewVisitDialog"));
        AddNewVisitDialog->resize(640, 480);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AddNewVisitDialog->sizePolicy().hasHeightForWidth());
        AddNewVisitDialog->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(AddNewVisitDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        comment = new QLineEdit(AddNewVisitDialog);
        comment->setObjectName(QStringLiteral("comment"));

        gridLayout->addWidget(comment, 1, 1, 1, 1);

        label_2 = new QLabel(AddNewVisitDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(AddNewVisitDialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        date = new QLineEdit(AddNewVisitDialog);
        date->setObjectName(QStringLiteral("date"));

        gridLayout->addWidget(date, 0, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        addBtn = new QPushButton(AddNewVisitDialog);
        addBtn->setObjectName(QStringLiteral("addBtn"));

        horizontalLayout->addWidget(addBtn);

        cancelBtn = new QPushButton(AddNewVisitDialog);
        cancelBtn->setObjectName(QStringLiteral("cancelBtn"));

        horizontalLayout->addWidget(cancelBtn);


        gridLayout->addLayout(horizontalLayout, 2, 1, 1, 1);


        retranslateUi(AddNewVisitDialog);

        QMetaObject::connectSlotsByName(AddNewVisitDialog);
    } // setupUi

    void retranslateUi(QWidget *AddNewVisitDialog)
    {
        AddNewVisitDialog->setWindowTitle(QApplication::translate("AddNewVisitDialog", "Form", Q_NULLPTR));
        comment->setText(QApplication::translate("AddNewVisitDialog", "\320\222\321\226\320\264\320\262\321\226\320\264\321\203\320\262\320\260\320\275\320\275\321\217", Q_NULLPTR));
        label_2->setText(QApplication::translate("AddNewVisitDialog", "\320\232\320\276\320\274\320\265\320\275\321\202\320\260\321\200:", Q_NULLPTR));
        label->setText(QApplication::translate("AddNewVisitDialog", "\320\224\320\260\321\202\320\260 :", Q_NULLPTR));
        addBtn->setText(QApplication::translate("AddNewVisitDialog", "\320\224\320\276\320\264\320\260\321\202\320\270", Q_NULLPTR));
        cancelBtn->setText(QApplication::translate("AddNewVisitDialog", "\320\222\321\226\320\264\320\274\321\226\320\275\320\270\321\202\320\270", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AddNewVisitDialog: public Ui_AddNewVisitDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDNEWVISITDIALOG_H

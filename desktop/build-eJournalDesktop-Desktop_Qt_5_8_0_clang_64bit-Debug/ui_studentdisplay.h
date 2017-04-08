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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StudentDisplay
{
public:
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_2;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QSpacerItem *horizontalSpacer;
    QToolButton *toolButton;
    QPushButton *addstudentBtn;
    QTableView *students;

    void setupUi(QWidget *StudentDisplay)
    {
        if (StudentDisplay->objectName().isEmpty())
            StudentDisplay->setObjectName(QStringLiteral("StudentDisplay"));
        StudentDisplay->resize(640, 480);
        gridLayout = new QGridLayout(StudentDisplay);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        lineEdit = new QLineEdit(StudentDisplay);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout_2->addWidget(lineEdit, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_2 = new QPushButton(StudentDisplay);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(StudentDisplay);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_3 = new QPushButton(StudentDisplay);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(StudentDisplay);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        horizontalLayout->addWidget(pushButton_4);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 1);

        toolButton = new QToolButton(StudentDisplay);
        toolButton->setObjectName(QStringLiteral("toolButton"));

        gridLayout_2->addWidget(toolButton, 0, 1, 1, 1);


        gridLayout->addLayout(gridLayout_2, 0, 0, 1, 1);

        addstudentBtn = new QPushButton(StudentDisplay);
        addstudentBtn->setObjectName(QStringLiteral("addstudentBtn"));

        gridLayout->addWidget(addstudentBtn, 3, 0, 1, 1);

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

        gridLayout->addWidget(students, 2, 0, 1, 1);


        retranslateUi(StudentDisplay);

        QMetaObject::connectSlotsByName(StudentDisplay);
    } // setupUi

    void retranslateUi(QWidget *StudentDisplay)
    {
        StudentDisplay->setWindowTitle(QApplication::translate("StudentDisplay", "Form", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("StudentDisplay", "\320\241\321\202\321\203\320\264\320\265\320\275\321\202", Q_NULLPTR));
        pushButton->setText(QApplication::translate("StudentDisplay", "\320\223\321\200\321\203\320\277\320\260", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("StudentDisplay", "\320\232\321\203\321\200\321\201", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("StudentDisplay", "\320\244\320\260\320\272\321\203\321\202\320\273\321\214\321\202\320\265\321\202", Q_NULLPTR));
        toolButton->setText(QApplication::translate("StudentDisplay", "Go", Q_NULLPTR));
        addstudentBtn->setText(QApplication::translate("StudentDisplay", "\320\224\320\276\320\264\320\260\321\202\320\270 \320\275\320\276\320\262\320\276\320\263\320\276 \321\201\321\202\321\203\320\264\320\265\320\275\321\202\320\260", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class StudentDisplay: public Ui_StudentDisplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTDISPLAY_H

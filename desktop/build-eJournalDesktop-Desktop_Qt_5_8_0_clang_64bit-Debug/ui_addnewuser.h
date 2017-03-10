/********************************************************************************
** Form generated from reading UI file 'addnewuser.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDNEWUSER_H
#define UI_ADDNEWUSER_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddNewUser
{
public:
    QVBoxLayout *verticalLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QGroupBox *commonInformation;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDateEdit *dateEdit;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *universitiInformation;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QComboBox *comboBox_2;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *ContactInformation;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QLineEdit *lineEdit_6;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QComboBox *comboBox_3;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_8;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_8;
    QGroupBox *torismInformation;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_9;
    QLineEdit *lineEdit_9;
    QLabel *label_6;
    QComboBox *comboBox_4;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_7;
    QPlainTextEdit *plainTextEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AddNewUser)
    {
        if (AddNewUser->objectName().isEmpty())
            AddNewUser->setObjectName(QStringLiteral("AddNewUser"));
        AddNewUser->resize(640, 526);
        verticalLayout_2 = new QVBoxLayout(AddNewUser);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        scrollArea = new QScrollArea(AddNewUser);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 606, 1022));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        commonInformation = new QGroupBox(scrollAreaWidgetContents);
        commonInformation->setObjectName(QStringLiteral("commonInformation"));
        verticalLayout_3 = new QVBoxLayout(commonInformation);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        lineEdit = new QLineEdit(commonInformation);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_3->addWidget(lineEdit);

        lineEdit_3 = new QLineEdit(commonInformation);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        horizontalLayout_3->addWidget(lineEdit_3);

        lineEdit_2 = new QLineEdit(commonInformation);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout_3->addWidget(lineEdit_2);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(commonInformation);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        dateEdit = new QDateEdit(commonInformation);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setDate(QDate(1998, 1, 1));

        horizontalLayout->addWidget(dateEdit);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(commonInformation);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        comboBox = new QComboBox(commonInformation);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setEditable(false);

        horizontalLayout_2->addWidget(comboBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout->addWidget(commonInformation);

        universitiInformation = new QGroupBox(scrollAreaWidgetContents);
        universitiInformation->setObjectName(QStringLiteral("universitiInformation"));
        verticalLayout_4 = new QVBoxLayout(universitiInformation);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        lineEdit_4 = new QLineEdit(universitiInformation);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        horizontalLayout_4->addWidget(lineEdit_4);

        lineEdit_5 = new QLineEdit(universitiInformation);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        horizontalLayout_4->addWidget(lineEdit_5);


        verticalLayout_4->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_3 = new QLabel(universitiInformation);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_5->addWidget(label_3);

        comboBox_2 = new QComboBox(universitiInformation);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        horizontalLayout_5->addWidget(comboBox_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);


        verticalLayout_4->addLayout(horizontalLayout_5);


        verticalLayout->addWidget(universitiInformation);

        ContactInformation = new QGroupBox(scrollAreaWidgetContents);
        ContactInformation->setObjectName(QStringLiteral("ContactInformation"));
        verticalLayout_5 = new QVBoxLayout(ContactInformation);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_4 = new QLabel(ContactInformation);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_6->addWidget(label_4);

        lineEdit_6 = new QLineEdit(ContactInformation);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));

        horizontalLayout_6->addWidget(lineEdit_6);


        verticalLayout_5->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_5 = new QLabel(ContactInformation);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_7->addWidget(label_5);

        comboBox_3 = new QComboBox(ContactInformation);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));

        horizontalLayout_7->addWidget(comboBox_3);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);


        verticalLayout_5->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        lineEdit_7 = new QLineEdit(ContactInformation);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));

        horizontalLayout_8->addWidget(lineEdit_7);

        lineEdit_8 = new QLineEdit(ContactInformation);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));

        horizontalLayout_8->addWidget(lineEdit_8);


        verticalLayout_5->addLayout(horizontalLayout_8);


        verticalLayout->addWidget(ContactInformation);

        torismInformation = new QGroupBox(scrollAreaWidgetContents);
        torismInformation->setObjectName(QStringLiteral("torismInformation"));
        verticalLayout_6 = new QVBoxLayout(torismInformation);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        lineEdit_9 = new QLineEdit(torismInformation);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));

        horizontalLayout_9->addWidget(lineEdit_9);

        label_6 = new QLabel(torismInformation);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_9->addWidget(label_6);

        comboBox_4 = new QComboBox(torismInformation);
        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));

        horizontalLayout_9->addWidget(comboBox_4);


        verticalLayout_6->addLayout(horizontalLayout_9);


        verticalLayout->addWidget(torismInformation);

        groupBox = new QGroupBox(scrollAreaWidgetContents);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        verticalLayout_7 = new QVBoxLayout(groupBox);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        plainTextEdit = new QPlainTextEdit(groupBox);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(plainTextEdit->sizePolicy().hasHeightForWidth());
        plainTextEdit->setSizePolicy(sizePolicy1);
        plainTextEdit->setMinimumSize(QSize(0, 500));

        verticalLayout_7->addWidget(plainTextEdit);


        verticalLayout->addWidget(groupBox);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);

        buttonBox = new QDialogButtonBox(AddNewUser);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(false);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(AddNewUser);
        QObject::connect(buttonBox, SIGNAL(accepted()), AddNewUser, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AddNewUser, SLOT(reject()));

        comboBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AddNewUser);
    } // setupUi

    void retranslateUi(QDialog *AddNewUser)
    {
        AddNewUser->setWindowTitle(QApplication::translate("AddNewUser", "Dialog", Q_NULLPTR));
        commonInformation->setTitle(QApplication::translate("AddNewUser", "\320\227\320\260\320\263\320\260\320\273\321\214\320\275\320\260 \321\226\320\275\321\204\320\276\321\200\320\274\320\260\321\206\321\226\321\217", Q_NULLPTR));
        lineEdit->setPlaceholderText(QApplication::translate("AddNewUser", "\320\206\320\274'\321\217", Q_NULLPTR));
        lineEdit_3->setPlaceholderText(QApplication::translate("AddNewUser", "\320\237\321\200\320\270\320\267\320\262\321\226\321\211\320\265", Q_NULLPTR));
        lineEdit_2->setPlaceholderText(QApplication::translate("AddNewUser", "\320\237\320\276\320\261\320\260\321\202\321\214\320\272\320\276\320\262\321\226", Q_NULLPTR));
        label->setText(QApplication::translate("AddNewUser", "\320\224\320\260\321\202\320\260 \320\275\320\260\321\200\320\276\320\264\320\266\320\265\320\275\320\275\321\217", Q_NULLPTR));
        dateEdit->setDisplayFormat(QApplication::translate("AddNewUser", "dd.MM.yyyy", Q_NULLPTR));
        label_2->setText(QApplication::translate("AddNewUser", "\320\241\320\260\321\202\320\260\321\202\321\214", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("AddNewUser", "\320\226\321\226\320\275\320\276\321\207\320\260", Q_NULLPTR)
         << QApplication::translate("AddNewUser", "\320\247\320\276\320\273\320\276\320\262\321\226\321\207\320\260", Q_NULLPTR)
        );
        universitiInformation->setTitle(QApplication::translate("AddNewUser", "\320\220\320\272\320\260\320\264\320\265\320\274\321\226\321\207\320\275\320\260 \321\226\320\275\321\204\320\276\321\200\320\274\320\260\321\206\321\226\321\217", Q_NULLPTR));
        lineEdit_4->setPlaceholderText(QApplication::translate("AddNewUser", "\320\235\320\276\320\274\320\265\321\200 \320\267\320\260\320\273\321\226\320\272\320\276\320\262\320\276\321\227 \320\272\320\275\320\270\320\266\320\272\320\270", Q_NULLPTR));
        lineEdit_5->setPlaceholderText(QApplication::translate("AddNewUser", "\320\220\320\272\320\260\320\264\320\265\320\274\321\226\321\207\320\275\320\260 \320\263\321\200\321\203\320\277\320\260", Q_NULLPTR));
        label_3->setText(QApplication::translate("AddNewUser", "\320\244\320\276\321\200\320\274\320\260 \320\275\320\260\320\262\321\207\320\260\320\275\320\275\321\217: ", Q_NULLPTR));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("AddNewUser", "\320\221\321\216\320\264\320\266\320\265\321\202\320\275\320\260", Q_NULLPTR)
         << QApplication::translate("AddNewUser", "\320\232\320\276\320\275\321\202\321\200\320\260\320\272\321\202\320\275\320\260", Q_NULLPTR)
        );
        ContactInformation->setTitle(QApplication::translate("AddNewUser", "\320\232\320\276\320\275\321\202\320\260\320\272\321\202\320\275\320\260 \321\226\320\275\321\204\320\276\321\200\320\274\320\260\321\206\321\226\321\217", Q_NULLPTR));
        label_4->setText(QApplication::translate("AddNewUser", "\320\220\320\264\321\200\320\265\321\201\321\201\320\260 \320\277\321\200\320\276\320\266\320\270\320\262\320\260\320\275\320\275\321\217: ", Q_NULLPTR));
        label_5->setText(QApplication::translate("AddNewUser", "\320\237\321\200\320\276\320\277\320\270\321\201\320\272\320\260:", Q_NULLPTR));
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("AddNewUser", "\320\245\320\260\321\200\320\272\321\226\320\262\321\201\321\214\320\272\320\260", Q_NULLPTR)
         << QApplication::translate("AddNewUser", "\320\245\320\260\321\200\320\272\321\226\320\262\321\201\321\214\320\272\320\260,  \320\263\321\203\321\200\321\202\320\276\320\266\320\270\320\276\320\272", Q_NULLPTR)
         << QApplication::translate("AddNewUser", "\320\245\320\260\321\200\320\272\321\226\320\262\321\201\321\214\320\272\320\260 \320\276\320\261\320\273\320\260\321\201\321\202\321\214", Q_NULLPTR)
         << QApplication::translate("AddNewUser", "\320\206\320\275\321\210\320\265 \320\274\321\226\321\201\321\202\320\276", Q_NULLPTR)
        );
        lineEdit_7->setPlaceholderText(QApplication::translate("AddNewUser", "\320\232\320\276\320\275\321\202\320\260\320\272\321\202\320\275\321\226 \320\275\320\276\320\274\320\265\321\200\320\270", Q_NULLPTR));
        lineEdit_8->setPlaceholderText(QApplication::translate("AddNewUser", "\320\225\320\273\320\265\320\272\321\202\321\200\320\276\320\275\320\275\320\260 \320\277\320\276\321\210\321\202\320\260", Q_NULLPTR));
        torismInformation->setTitle(QApplication::translate("AddNewUser", "\320\206\320\275\321\204\320\276\321\200\320\274\320\260\321\206\321\226\321\217 \320\262\321\226\320\275\320\264\320\275\320\276\321\201\320\275\320\276 \321\201\320\265\320\272\321\206\321\226\321\227 \"\320\242\321\203\321\200\320\270\320\267\320\274\"", Q_NULLPTR));
        lineEdit_9->setPlaceholderText(QApplication::translate("AddNewUser", "\320\223\321\200\321\203\320\277\320\277\320\260 \320\275\320\260 \321\201\320\265\320\272\321\206\321\226\321\227 \321\202\321\203\321\200\320\270\320\267\320\274", Q_NULLPTR));
        label_6->setText(QApplication::translate("AddNewUser", "\320\241\320\277\320\276\321\200\321\202\320\270\320\262\320\275\320\270\320\271 \321\200\320\276\320\267\321\200\321\217\320\264", Q_NULLPTR));
        comboBox_4->clear();
        comboBox_4->insertItems(0, QStringList()
         << QApplication::translate("AddNewUser", "\320\222\321\226\320\264\321\201\321\203\321\202\320\275\321\226\320\271", Q_NULLPTR)
         << QApplication::translate("AddNewUser", "\320\234\320\260\321\201\321\202\320\265\321\200 \321\201\320\277\320\276\321\200\321\203\321\202", Q_NULLPTR)
         << QApplication::translate("AddNewUser", "\320\232\320\260\320\275\320\264\320\270\320\264\320\260\321\202 \320\262 \320\274\320\260\320\271\321\202\321\201\321\200\320\270 \321\201\320\277\320\276\321\200\321\202\321\203", Q_NULLPTR)
         << QApplication::translate("AddNewUser", "\320\237\320\265\321\200\321\210\320\270\320\271 \321\200\320\276\320\267\321\200\321\217\320\266", Q_NULLPTR)
         << QApplication::translate("AddNewUser", "\320\224\321\200\321\203\320\263\320\270\320\271 \321\200\320\276\320\267\321\200\321\217\320\264", Q_NULLPTR)
         << QApplication::translate("AddNewUser", "\320\242\321\200\320\265\321\202\321\226\320\271 \321\200\320\276\320\267\321\200\321\217\320\264", Q_NULLPTR)
        );
        groupBox->setTitle(QApplication::translate("AddNewUser", "\320\224\320\276\320\264\320\260\321\202\320\272\320\276\320\262\320\260 \321\226\320\275\321\204\320\276\321\200\320\274\320\260\321\206\321\226\321\217", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AddNewUser: public Ui_AddNewUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDNEWUSER_H

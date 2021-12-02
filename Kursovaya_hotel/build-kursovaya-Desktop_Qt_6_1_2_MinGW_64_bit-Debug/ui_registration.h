/********************************************************************************
** Form generated from reading UI file 'registration.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRATION_H
#define UI_REGISTRATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_registration
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *name;
    QLabel *label_3;
    QLineEdit *birthday;
    QLineEdit *adress;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *passport;
    QLabel *label_8;
    QLineEdit *phone;
    QLabel *label_9;
    QLineEdit *email;
    QLabel *label_10;
    QPushButton *continue_2;
    QPushButton *back_2;
    QLabel *label_11;
    QLabel *label_12;
    QLineEdit *user_name;
    QLineEdit *password;
    QLabel *label_6;
    QLineEdit *lineEdit;

    void setupUi(QDialog *registration)
    {
        if (registration->objectName().isEmpty())
            registration->setObjectName(QString::fromUtf8("registration"));
        registration->resize(700, 700);
        label = new QLabel(registration);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(190, 10, 171, 16));
        label_2 = new QLabel(registration);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 50, 47, 13));
        name = new QLineEdit(registration);
        name->setObjectName(QString::fromUtf8("name"));
        name->setGeometry(QRect(90, 50, 381, 20));
        label_3 = new QLabel(registration);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 100, 111, 16));
        birthday = new QLineEdit(registration);
        birthday->setObjectName(QString::fromUtf8("birthday"));
        birthday->setGeometry(QRect(120, 100, 341, 20));
        adress = new QLineEdit(registration);
        adress->setObjectName(QString::fromUtf8("adress"));
        adress->setGeometry(QRect(160, 190, 391, 20));
        label_4 = new QLabel(registration);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 160, 47, 13));
        label_5 = new QLabel(registration);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 190, 101, 16));
        passport = new QLineEdit(registration);
        passport->setObjectName(QString::fromUtf8("passport"));
        passport->setGeometry(QRect(220, 240, 201, 20));
        label_8 = new QLabel(registration);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(30, 240, 161, 16));
        phone = new QLineEdit(registration);
        phone->setObjectName(QString::fromUtf8("phone"));
        phone->setGeometry(QRect(170, 300, 221, 20));
        label_9 = new QLabel(registration);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(30, 300, 101, 16));
        email = new QLineEdit(registration);
        email->setObjectName(QString::fromUtf8("email"));
        email->setGeometry(QRect(100, 360, 281, 20));
        label_10 = new QLabel(registration);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(30, 360, 47, 13));
        continue_2 = new QPushButton(registration);
        continue_2->setObjectName(QString::fromUtf8("continue_2"));
        continue_2->setGeometry(QRect(460, 580, 93, 28));
        back_2 = new QPushButton(registration);
        back_2->setObjectName(QString::fromUtf8("back_2"));
        back_2->setGeometry(QRect(40, 580, 93, 28));
        label_11 = new QLabel(registration);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(20, 420, 171, 16));
        label_12 = new QLabel(registration);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(20, 470, 111, 16));
        user_name = new QLineEdit(registration);
        user_name->setObjectName(QString::fromUtf8("user_name"));
        user_name->setGeometry(QRect(230, 420, 301, 20));
        password = new QLineEdit(registration);
        password->setObjectName(QString::fromUtf8("password"));
        password->setGeometry(QRect(160, 470, 351, 20));
        label_6 = new QLabel(registration);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 150, 81, 16));
        lineEdit = new QLineEdit(registration);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(110, 150, 311, 20));

        retranslateUi(registration);

        QMetaObject::connectSlotsByName(registration);
    } // setupUi

    void retranslateUi(QDialog *registration)
    {
        registration->setWindowTitle(QCoreApplication::translate("registration", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("registration", "\320\241\320\276\320\267\320\264\320\260\320\275\320\270\320\265 \320\277\321\200\320\276\321\204\320\270\320\273\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("registration", "\320\244\320\230\320\236:", nullptr));
        label_3->setText(QCoreApplication::translate("registration", "\320\224\320\260\321\202\320\260 \320\240\320\276\320\266\320\264\320\265\320\275\320\270\321\217:", nullptr));
        label_4->setText(QString());
        label_5->setText(QCoreApplication::translate("registration", "\320\220\320\264\321\200\320\265\321\201 \320\277\321\200\320\276\320\266\320\270\320\262\320\260\320\275\320\270\321\217:", nullptr));
        label_8->setText(QCoreApplication::translate("registration", "\320\241\320\265\321\200\320\270\321\217 \320\270 \320\275\320\276\320\274\320\265\321\200 \320\277\320\260\321\201\320\277\320\276\321\200\321\202\320\260:", nullptr));
        label_9->setText(QCoreApplication::translate("registration", "\320\235\320\276\320\274\320\265\321\200 \321\202\320\265\320\273\320\265\321\204\320\276\320\275\320\260:", nullptr));
        label_10->setText(QCoreApplication::translate("registration", "\320\237\320\276\321\207\321\202\320\260:", nullptr));
        continue_2->setText(QCoreApplication::translate("registration", "\320\237\321\200\320\276\320\264\320\276\320\273\320\266\320\270\321\202\321\214", nullptr));
        back_2->setText(QCoreApplication::translate("registration", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        label_11->setText(QCoreApplication::translate("registration", "\320\237\321\200\320\270\320\264\321\203\320\274\320\260\320\271\321\202\320\265 \320\270\320\274\321\217 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217:", nullptr));
        label_12->setText(QCoreApplication::translate("registration", "\320\237\321\200\320\270\320\264\321\203\320\274\320\260\320\271\321\202\320\265 \320\277\320\260\321\200\320\276\320\273\321\214:", nullptr));
        label_6->setText(QCoreApplication::translate("registration", "\320\237\320\276\320\273(\320\234/\320\226):", nullptr));
    } // retranslateUi

};

namespace Ui {
    class registration: public Ui_registration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRATION_H

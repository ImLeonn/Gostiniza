/********************************************************************************
** Form generated from reading UI file 'adminscreen.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINSCREEN_H
#define UI_ADMINSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_adminscreen
{
public:
    QPushButton *checkin;
    QPushButton *create_c;
    QPushButton *quit;
    QLabel *label_2;

    void setupUi(QDialog *adminscreen)
    {
        if (adminscreen->objectName().isEmpty())
            adminscreen->setObjectName(QString::fromUtf8("adminscreen"));
        adminscreen->resize(700, 700);
        checkin = new QPushButton(adminscreen);
        checkin->setObjectName(QString::fromUtf8("checkin"));
        checkin->setGeometry(QRect(170, 150, 271, 121));
        create_c = new QPushButton(adminscreen);
        create_c->setObjectName(QString::fromUtf8("create_c"));
        create_c->setGeometry(QRect(170, 320, 271, 121));
        quit = new QPushButton(adminscreen);
        quit->setObjectName(QString::fromUtf8("quit"));
        quit->setGeometry(QRect(30, 630, 101, 31));
        label_2 = new QLabel(adminscreen);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(250, 80, 111, 16));

        retranslateUi(adminscreen);

        QMetaObject::connectSlotsByName(adminscreen);
    } // setupUi

    void retranslateUi(QDialog *adminscreen)
    {
        adminscreen->setWindowTitle(QCoreApplication::translate("adminscreen", "Dialog", nullptr));
        checkin->setText(QCoreApplication::translate("adminscreen", "\320\232\320\276\320\274\320\275\320\260\321\202\321\213", nullptr));
        create_c->setText(QCoreApplication::translate("adminscreen", "\320\232\320\273\320\270\320\265\320\275\321\202\321\213", nullptr));
        quit->setText(QCoreApplication::translate("adminscreen", "\320\222\321\213\320\271\321\202\320\270", nullptr));
        label_2->setText(QCoreApplication::translate("adminscreen", "\320\220\320\264\320\274\320\270\320\275\320\270\321\201\321\202\321\200\320\260\321\202\320\276\321\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminscreen: public Ui_adminscreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINSCREEN_H

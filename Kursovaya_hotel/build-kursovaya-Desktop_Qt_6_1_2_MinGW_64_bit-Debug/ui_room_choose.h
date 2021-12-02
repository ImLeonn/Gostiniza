/********************************************************************************
** Form generated from reading UI file 'room_choose.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROOM_CHOOSE_H
#define UI_ROOM_CHOOSE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_room_choose
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *continue_4;
    QPushButton *back_4;
    QLabel *label_4;
    QLabel *price1;
    QComboBox *comfort;
    QComboBox *size;

    void setupUi(QDialog *room_choose)
    {
        if (room_choose->objectName().isEmpty())
            room_choose->setObjectName(QString::fromUtf8("room_choose"));
        room_choose->resize(700, 700);
        label = new QLabel(room_choose);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(290, 20, 131, 16));
        label_2 = new QLabel(room_choose);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 190, 101, 16));
        label_3 = new QLabel(room_choose);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 290, 51, 16));
        continue_4 = new QPushButton(room_choose);
        continue_4->setObjectName(QString::fromUtf8("continue_4"));
        continue_4->setGeometry(QRect(560, 590, 93, 28));
        back_4 = new QPushButton(room_choose);
        back_4->setObjectName(QString::fromUtf8("back_4"));
        back_4->setGeometry(QRect(30, 590, 93, 28));
        label_4 = new QLabel(room_choose);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 410, 131, 16));
        price1 = new QLabel(room_choose);
        price1->setObjectName(QString::fromUtf8("price1"));
        price1->setGeometry(QRect(220, 410, 271, 16));
        comfort = new QComboBox(room_choose);
        comfort->setObjectName(QString::fromUtf8("comfort"));
        comfort->setGeometry(QRect(150, 190, 221, 22));
        size = new QComboBox(room_choose);
        size->setObjectName(QString::fromUtf8("size"));
        size->setGeometry(QRect(150, 290, 211, 22));

        retranslateUi(room_choose);

        QMetaObject::connectSlotsByName(room_choose);
    } // setupUi

    void retranslateUi(QDialog *room_choose)
    {
        room_choose->setWindowTitle(QCoreApplication::translate("room_choose", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("room_choose", "\320\222\321\213\320\261\320\276\321\200 \320\272\320\276\320\274\320\275\320\260\321\202\321\213", nullptr));
        label_2->setText(QCoreApplication::translate("room_choose", "\320\232\320\276\320\274\321\204\320\276\321\200\321\202\320\275\320\276\321\201\321\202\321\214:", nullptr));
        label_3->setText(QCoreApplication::translate("room_choose", "\320\240\320\260\320\267\320\274\320\265\321\200:", nullptr));
        continue_4->setText(QCoreApplication::translate("room_choose", "\320\277\321\200\320\276\320\264\320\276\320\273\320\266\320\270\321\202\321\214", nullptr));
        back_4->setText(QCoreApplication::translate("room_choose", "\320\275\320\260\320\267\320\260\320\264", nullptr));
        label_4->setText(QCoreApplication::translate("room_choose", "\320\246\320\265\320\275\320\260 \320\267\320\260 1 \321\201\321\203\321\202\320\272\320\270:", nullptr));
        price1->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class room_choose: public Ui_room_choose {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROOM_CHOOSE_H

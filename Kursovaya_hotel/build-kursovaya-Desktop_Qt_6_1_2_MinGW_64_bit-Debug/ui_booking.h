/********************************************************************************
** Form generated from reading UI file 'booking.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKING_H
#define UI_BOOKING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_booking
{
public:
    QPushButton *bookr;
    QPushButton *cancel_b;
    QPushButton *back_5;

    void setupUi(QDialog *booking)
    {
        if (booking->objectName().isEmpty())
            booking->setObjectName(QString::fromUtf8("booking"));
        booking->resize(700, 700);
        bookr = new QPushButton(booking);
        bookr->setObjectName(QString::fromUtf8("bookr"));
        bookr->setGeometry(QRect(270, 170, 151, 81));
        cancel_b = new QPushButton(booking);
        cancel_b->setObjectName(QString::fromUtf8("cancel_b"));
        cancel_b->setGeometry(QRect(260, 330, 161, 91));
        back_5 = new QPushButton(booking);
        back_5->setObjectName(QString::fromUtf8("back_5"));
        back_5->setGeometry(QRect(40, 590, 93, 28));

        retranslateUi(booking);

        QMetaObject::connectSlotsByName(booking);
    } // setupUi

    void retranslateUi(QDialog *booking)
    {
        booking->setWindowTitle(QCoreApplication::translate("booking", "Dialog", nullptr));
        bookr->setText(QCoreApplication::translate("booking", "\320\221\321\200\320\276\320\275\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        cancel_b->setText(QCoreApplication::translate("booking", "\320\236\321\202\320\274\320\265\320\275\320\270\321\202\321\214 \320\261\321\200\320\276\320\275\321\214", nullptr));
        back_5->setText(QCoreApplication::translate("booking", "\320\235\320\260\320\267\320\260\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class booking: public Ui_booking {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKING_H

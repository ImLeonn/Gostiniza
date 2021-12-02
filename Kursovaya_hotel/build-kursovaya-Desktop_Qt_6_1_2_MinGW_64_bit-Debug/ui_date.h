/********************************************************************************
** Form generated from reading UI file 'date.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATE_H
#define UI_DATE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_date
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *price2;
    QLineEdit *arrival;
    QLineEdit *release;
    QPushButton *back_6;
    QPushButton *continue_6;
    QPushButton *pushButton;

    void setupUi(QDialog *date)
    {
        if (date->objectName().isEmpty())
            date->setObjectName(QString::fromUtf8("date"));
        date->resize(700, 700);
        label = new QLabel(date);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(300, 20, 111, 16));
        label_2 = new QLabel(date);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 120, 111, 16));
        label_3 = new QLabel(date);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 210, 71, 16));
        label_4 = new QLabel(date);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 330, 131, 16));
        price2 = new QLabel(date);
        price2->setObjectName(QString::fromUtf8("price2"));
        price2->setGeometry(QRect(200, 330, 101, 16));
        arrival = new QLineEdit(date);
        arrival->setObjectName(QString::fromUtf8("arrival"));
        arrival->setGeometry(QRect(150, 120, 211, 20));
        release = new QLineEdit(date);
        release->setObjectName(QString::fromUtf8("release"));
        release->setGeometry(QRect(140, 210, 271, 20));
        back_6 = new QPushButton(date);
        back_6->setObjectName(QString::fromUtf8("back_6"));
        back_6->setGeometry(QRect(20, 600, 93, 28));
        continue_6 = new QPushButton(date);
        continue_6->setObjectName(QString::fromUtf8("continue_6"));
        continue_6->setGeometry(QRect(260, 460, 131, 28));
        pushButton = new QPushButton(date);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(50, 270, 131, 28));

        retranslateUi(date);

        QMetaObject::connectSlotsByName(date);
    } // setupUi

    void retranslateUi(QDialog *date)
    {
        date->setWindowTitle(QCoreApplication::translate("date", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("date", "\320\222\321\213\320\261\320\276\321\200 \320\264\320\260\321\202\321\213", nullptr));
        label_2->setText(QCoreApplication::translate("date", "\320\224\320\260\321\202\320\260 \320\267\320\260\320\265\320\267\320\264\320\260:", nullptr));
        label_3->setText(QCoreApplication::translate("date", "\320\224\320\260\321\202\320\260 \320\262\321\213\320\265\320\267\320\264\320\260:", nullptr));
        label_4->setText(QCoreApplication::translate("date", "\320\246\320\265\320\275\320\260 (\321\201 \321\203\321\207\320\265\321\202\320\276\320\274 \321\201\320\272\320\270\320\264\320\272\320\270):", nullptr));
        price2->setText(QCoreApplication::translate("date", "0\321\200\321\203\320\261.", nullptr));
        back_6->setText(QCoreApplication::translate("date", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        continue_6->setText(QCoreApplication::translate("date", "\320\227\320\260\320\261\321\200\320\276\320\275\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        pushButton->setText(QCoreApplication::translate("date", "\320\240\320\260\321\201\321\207\320\270\321\202\320\260\321\202\321\214 \321\206\320\265\320\275\321\203", nullptr));
    } // retranslateUi

};

namespace Ui {
    class date: public Ui_date {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATE_H

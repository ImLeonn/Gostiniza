/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Admin
{
public:
    QLabel *label;
    QLineEdit *pass_2;
    QPushButton *continue_7;
    QPushButton *back_7;

    void setupUi(QDialog *Admin)
    {
        if (Admin->objectName().isEmpty())
            Admin->setObjectName(QString::fromUtf8("Admin"));
        Admin->resize(700, 700);
        label = new QLabel(Admin);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 300, 101, 16));
        pass_2 = new QLineEdit(Admin);
        pass_2->setObjectName(QString::fromUtf8("pass_2"));
        pass_2->setGeometry(QRect(170, 300, 391, 20));
        continue_7 = new QPushButton(Admin);
        continue_7->setObjectName(QString::fromUtf8("continue_7"));
        continue_7->setGeometry(QRect(200, 390, 221, 28));
        back_7 = new QPushButton(Admin);
        back_7->setObjectName(QString::fromUtf8("back_7"));
        back_7->setGeometry(QRect(60, 390, 93, 28));

        retranslateUi(Admin);

        QMetaObject::connectSlotsByName(Admin);
    } // setupUi

    void retranslateUi(QDialog *Admin)
    {
        Admin->setWindowTitle(QCoreApplication::translate("Admin", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Admin", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\277\320\260\321\200\320\276\320\273\321\214:", nullptr));
        pass_2->setText(QString());
        continue_7->setText(QCoreApplication::translate("Admin", "\320\237\321\200\320\276\320\264\320\276\320\273\320\266\320\270\321\202\321\214", nullptr));
        back_7->setText(QCoreApplication::translate("Admin", "\320\235\320\260\320\267\320\260\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Admin: public Ui_Admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H

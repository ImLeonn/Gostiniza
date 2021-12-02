/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionCreate_new;
    QAction *actionOpen;
    QAction *actionExit;
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *log;
    QPushButton *registrate;
    QPushButton *pushButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(700, 700);
        actionCreate_new = new QAction(MainWindow);
        actionCreate_new->setObjectName(QString::fromUtf8("actionCreate_new"));
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 50, 701, 200));
        QFont font;
        font.setFamilies({QString::fromUtf8("STLiti")});
        font.setPointSize(22);
        font.setBold(false);
        font.setUnderline(true);
        label->setFont(font);
        log = new QPushButton(centralwidget);
        log->setObjectName(QString::fromUtf8("log"));
        log->setGeometry(QRect(20, 320, 271, 91));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("STXihei")});
        font1.setPointSize(19);
        log->setFont(font1);
        registrate = new QPushButton(centralwidget);
        registrate->setObjectName(QString::fromUtf8("registrate"));
        registrate->setGeometry(QRect(390, 320, 271, 91));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("STXihei")});
        font2.setPointSize(21);
        registrate->setFont(font2);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(560, 610, 93, 28));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionCreate_new->setText(QCoreApplication::translate("MainWindow", "Create new", nullptr));
        actionOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "    \320\223\320\276\321\201\321\202\320\270\320\275\320\270\321\206\320\260     \320\232\320\276\321\201\320\274\320\276\321\201", nullptr));
        log->setText(QCoreApplication::translate("MainWindow", "\320\222\320\276\320\271\321\202\320\270", nullptr));
        registrate->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\220\320\264\320\274\320\270\320\275\320\270\321\201\321\202\321\200\320\260\321\202\320\276\321\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

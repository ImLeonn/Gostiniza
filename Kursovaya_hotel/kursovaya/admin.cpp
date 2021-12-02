#include "admin.h"
#include "ui_admin.h"
#include <QMessageBox>

Admin::Admin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Admin)
{
    ui->setupUi(this);
    pannel = new adminscreen();
    connect(pannel, &adminscreen::mainWindow, this, &Admin::show);
}

Admin::~Admin()
{
    delete ui;
}


void Admin::on_continue_7_clicked()
{
    QString pass = ui->pass_2->text();

    if(pass == "MyPassIs26")
    {
    pannel->show();
    this->close();
    }
    else
    {
        QMessageBox::warning(this, "Ошибка","Не верный пароль!");
    }
}


void Admin::on_back_7_clicked()
{
    this->close();
    emit mainWindow();
}


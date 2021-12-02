#include "adminscreen.h"
#include "ui_adminscreen.h"



adminscreen::adminscreen(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adminscreen)
{
    ui->setupUi(this);
}

adminscreen::~adminscreen()
{
    delete ui;
}

void adminscreen::on_quit_clicked()
{
        this->close();
        emit mainWindow();
}


void adminscreen::on_checkin_clicked()
{

}


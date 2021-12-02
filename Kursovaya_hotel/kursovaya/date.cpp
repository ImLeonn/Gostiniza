#include "date.h"
#include "ui_date.h"

date::date(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::date)
{
    ui->setupUi(this);
}

date::~date()
{
    delete ui;
}

void date::on_back_6_clicked()
{
    this->close();
    emit mainWindow();
}


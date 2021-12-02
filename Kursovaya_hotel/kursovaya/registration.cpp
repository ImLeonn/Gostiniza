#include "registration.h"
#include "ui_registration.h"

registration::registration(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registration)
{
    ui->setupUi(this);
    book = new booking();
    connect(book, &booking::mainWindow, this, &registration::show);
}

registration::~registration()
{
    delete ui;
}

void registration::on_back_2_clicked()
{
    this->close();
    emit mainWindow();
}


void registration::on_continue_2_clicked()
{
    book->show();
    this->close();
}


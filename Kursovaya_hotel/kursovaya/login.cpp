#include "login.h"
#include "ui_login.h"

login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    book = new booking();
    connect(book, &booking::mainWindow, this, &login::show);
}

login::~login()
{
    delete ui;
}

void login::on_back_3_clicked()
{
    this->close();
    emit mainWindow();
}


void login::on_continue_3_clicked()
{
    book->show();
   this->close();
}


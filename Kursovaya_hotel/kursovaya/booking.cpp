#include "booking.h"
#include "ui_booking.h"

booking::booking(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::booking)
{
    ui->setupUi(this);
    room = new room_choose();
    connect(room, &room_choose::mainWindow, this, &booking::show);
}

booking::~booking()
{
    delete ui;
}

void booking::on_back_5_clicked()
{
    this->close();
    emit mainWindow();
}


void booking::on_bookr_clicked()
{
   room->show();
   this->close();
}


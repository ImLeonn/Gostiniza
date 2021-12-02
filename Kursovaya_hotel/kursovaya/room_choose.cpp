#include "room_choose.h"
#include "ui_room_choose.h"

room_choose::room_choose(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::room_choose)
{
    ui->setupUi(this);
    ui->comfort->addItem("Стандарт");
    ui->comfort->addItem("Полулюкс");
    ui->comfort->addItem("Люкс");

    ui->size->addItem("Стандарт");
    ui->size->addItem("Большая");

    datte = new date();
    connect(datte, &date::mainWindow, this, &room_choose::show);
}

int comfindex, roomprice;

room_choose::~room_choose()
{
    delete ui;
}

void room_choose::on_back_4_clicked()
{
    this->close();
    emit mainWindow();
}


void room_choose::on_continue_4_clicked()
{
    datte->show();
    this->close();
}


void room_choose::on_comfort_currentIndexChanged(int index)
{
       comfindex = index;
       if (comfindex == 0 && (ui->size->currentIndex()==0))
       {
           ui->price1->setText("2500р");
       }
       else if (comfindex == 1 && (ui->size->currentIndex()==0))
       {
           ui->price1->setText("3500р");
       }
       else if (comfindex == 2 && (ui->size->currentIndex()==0))
       {
           ui->price1->setText("5000р");
       }
       else if (comfindex == 0 && (ui->size->currentIndex()==1))
       {
           ui->price1->setText("3000р");
       }
       else if (comfindex == 1 && (ui->size->currentIndex()==1))
       {
           ui->price1->setText("4500р");
       }
       else if (comfindex == 2 && (ui->size->currentIndex()==1))
       {
           ui->price1->setText("6000р");
       }
}

void room_choose::on_size_currentIndexChanged(int index)
{
    if (comfindex == 0 && (index==0))
    {
        ui->price1->setText("2500р");
    }
    else if (comfindex == 1 && (index==0))
    {
        ui->price1->setText("3500р");
    }
    else if (comfindex == 2 && (index==0))
    {
        ui->price1->setText("5000р");
    }
    else if (comfindex == 0 && (index==1))
    {
        ui->price1->setText("3000р");
    }
    else if (comfindex == 1 && (index==1))
    {
        ui->price1->setText("4500р");
    }
    else if (comfindex == 2 && (index==1))
    {
        ui->price1->setText("6000р");
    }

    roomprice = ui->price1->text().toInt();
}



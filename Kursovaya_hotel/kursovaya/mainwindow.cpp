#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    log = new login();
    connect(log, &login::mainWindow, this, &MainWindow::show);
    registrate = new registration();
    connect(registrate, &registration::mainWindow, this, &MainWindow::show);
    enter = new Admin();
    connect(enter, &Admin::mainWindow, this, &MainWindow::show);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_log_clicked()//нажал войти
{
    log->show();
    this->close();
}


void MainWindow::on_registrate_clicked()//нажал зарегестрироваться
{
   registrate->show();
   this->close();
}


void MainWindow::on_pushButton_clicked() //нажал админ
{
    enter->show();
    this->close();
}


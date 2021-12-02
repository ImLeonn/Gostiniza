#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <login.h>
#include <registration.h>
#include <admin.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();



private slots:
    void on_log_clicked();

    void on_registrate_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    login *log;
    registration *registrate;
    Admin *enter;


};
#endif // MAINWINDOW_H

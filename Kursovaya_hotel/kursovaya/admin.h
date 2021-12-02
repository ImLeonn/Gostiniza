#ifndef ADMIN_H
#define ADMIN_H

#include <QDialog>
#include <adminscreen.h>

namespace Ui {
class Admin;
}

class Admin : public QDialog
{
    Q_OBJECT

public:
    explicit Admin(QWidget *parent = nullptr);
    ~Admin();

signals:
    void mainWindow();

private slots:
    void on_continue_7_clicked();

    void on_back_7_clicked();

private:
    Ui::Admin *ui;
    adminscreen *pannel;
};

#endif // ADMIN_H

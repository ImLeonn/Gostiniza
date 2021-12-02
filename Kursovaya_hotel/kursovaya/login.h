#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include <booking.h>

namespace Ui {
class login;
}

class login : public QDialog
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = nullptr);
    ~login();

private slots:
    void on_back_3_clicked();

    void on_continue_3_clicked();

signals:
    void mainWindow();

private:
    Ui::login *ui;
    booking *book;
};

#endif // LOGIN_H

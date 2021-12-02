#ifndef REGISTRATION_H
#define REGISTRATION_H

#include <QDialog>
#include <booking.h>

namespace Ui {
class registration;
}

class registration : public QDialog
{
    Q_OBJECT

public:
    explicit registration(QWidget *parent = nullptr);
    ~registration();

private slots:
    void on_back_2_clicked();

    void on_continue_2_clicked();

signals:
    void mainWindow();

private:
    Ui::registration *ui;
    booking *book;
};

#endif // REGISTRATION_H

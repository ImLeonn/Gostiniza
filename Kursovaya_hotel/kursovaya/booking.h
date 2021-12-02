#ifndef BOOKING_H
#define BOOKING_H

#include <QDialog>
#include <room_choose.h>

namespace Ui {
class booking;
}

class booking : public QDialog
{
    Q_OBJECT

public:
    explicit booking(QWidget *parent = nullptr);
    ~booking();

signals:
    void mainWindow();

private slots:
    void on_back_5_clicked();

    void on_bookr_clicked();

private:
    Ui::booking *ui;
    room_choose *room;
};

#endif // BOOKING_H

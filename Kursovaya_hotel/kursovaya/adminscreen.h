#ifndef ADMINSCREEN_H
#define ADMINSCREEN_H

#include <QDialog>


namespace Ui {
class adminscreen;
}

class adminscreen : public QDialog
{
    Q_OBJECT

public:
    explicit adminscreen(QWidget *parent = nullptr);
    ~adminscreen();

signals:
    void mainWindow();

private slots:
    void on_quit_clicked();

    void on_checkin_clicked();

private:
    Ui::adminscreen *ui;
};

#endif // ADMINSCREEN_H

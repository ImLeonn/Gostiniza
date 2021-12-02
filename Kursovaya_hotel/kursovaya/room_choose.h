#ifndef ROOM_CHOOSE_H
#define ROOM_CHOOSE_H

#include <QDialog>
#include <date.h>

namespace Ui {
class room_choose;
}

class room_choose : public QDialog
{
    Q_OBJECT

public:
    explicit room_choose(QWidget *parent = nullptr);
    ~room_choose();

signals:
    void mainWindow();

private slots:
    void on_back_4_clicked();

    void on_continue_4_clicked();

    void on_size_currentIndexChanged(int index);

    void on_comfort_currentIndexChanged(int index);

private:
    Ui::room_choose *ui;
    date *datte;
};

#endif // ROOM_CHOOSE_H

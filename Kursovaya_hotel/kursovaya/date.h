#ifndef DATE_H
#define DATE_H

#include <QDialog>

namespace Ui {
class date;
}

class date : public QDialog
{
    Q_OBJECT

public:
    explicit date(QWidget *parent = nullptr);
    ~date();

signals:
    void mainWindow();
private slots:
    void on_back_6_clicked();

private:
    Ui::date *ui;
};

#endif // DATE_H

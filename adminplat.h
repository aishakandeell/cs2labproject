#ifndef ADMINPLAT_H
#define ADMINPLAT_H

#include <QDialog>

namespace Ui {
class adminplat;
}

class adminplat : public QDialog
{
    Q_OBJECT

public:
    explicit adminplat(QWidget *parent = nullptr);
    ~adminplat();

private slots:
    void on_pushButton_clicked();

private:
    Ui::adminplat *ui;
    QString adminp = "admin";
};

#endif // ADMINPLAT_H

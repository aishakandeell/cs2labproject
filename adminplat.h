#ifndef ADMINPLAT_H
#define ADMINPLAT_H

#include <QDialog>
using namespace std;
namespace Ui {
class adminplat;
}

class adminplat : public QDialog
{
    Q_OBJECT

public:
    explicit adminplat(QWidget *parent = nullptr);
    ~adminplat();
    QString adminp = "admin";

private slots:
    void on_pushButton_clicked();

private:
    Ui::adminplat *ui;
};

#endif // ADMINPLAT_H

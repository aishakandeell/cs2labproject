#ifndef ADMINSETTINGS_H
#define ADMINSETTINGS_H

#include <QDialog>

namespace Ui {
class adminSettings;
}

class adminSettings : public QDialog
{
    Q_OBJECT

public:
    explicit adminSettings(QWidget *parent = nullptr);
    ~adminSettings();

private slots:
    void on_addUser_clicked();

    void on_editUser_clicked();

    void on_deleteUser_clicked();

    void on_addProd_clicked();

    void on_editProd_clicked();

    void on_deleteProd_clicked();

    void on_backtlogin_clicked();

private:
    Ui::adminSettings *ui;
};

#endif // ADMINSETTINGS_H

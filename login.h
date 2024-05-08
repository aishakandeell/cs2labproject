#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include <algorithm>
using namespace std;
namespace Ui {
class login;
}

class login : public QDialog
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = nullptr);
    ~login();
signals:
    // Signal emitted when a user logs in successfully
    void read();

private slots:
    void on_login2_clicked();

    void on_backtoregister_clicked();

private:
    Ui::login *ui;
};

#endif // LOGIN_H

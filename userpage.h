#ifndef USERPAGE_H
#define USERPAGE_H

#include <QDialog>

namespace Ui {
class userpage;
}

class userpage : public QDialog
{
    Q_OBJECT

public:
    explicit userpage(QWidget *parent = nullptr);
    ~userpage();


private slots:
    void on_loginclicked_clicked();
    void on_registerclicked_clicked();

    void on_adminbutton_clicked();

private:
    Ui::userpage *ui;
};

#endif // USERPAGE_H

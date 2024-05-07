#ifndef CHECKOUT_H
#define CHECKOUT_H

#include <QDialog>
#include "cart.h"

namespace Ui {
class checkout;
}

class checkout : public QDialog
{
    Q_OBJECT

public:
    explicit checkout(QWidget *parent = nullptr);
    ~checkout();

private slots:
    void on_creditcard_toggled(bool checked);

    void on_Pay_clicked();

    void on_cancel_clicked();

private:
    Ui::checkout *ui;
};

#endif // CHECKOUT_H

#ifndef ADDPRODUCT_H
#define ADDPRODUCT_H

#include <QDialog>

namespace Ui {
class addproduct;
}

class addproduct : public QDialog
{
    Q_OBJECT

public:
    explicit addproduct(QWidget *parent = nullptr);
    ~addproduct();

private slots:
    void on_addProd_clicked();

    void on_createCat_clicked();


private:
    Ui::addproduct *ui;
};

#endif // ADDPRODUCT_H

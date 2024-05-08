#include "checkout.h"
#include "QtWidgets/qmessagebox.h"
#include "ui_checkout.h"
#include "cart.h"

checkout::checkout(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::checkout)
{
    ui->setupUi(this);
    ui->ccinfo->setVisible(false);
    ui->total->setText("Total Price: " + QString::number(totalprice));
}

checkout::~checkout()
{
    delete ui;
}

void checkout::on_creditcard_toggled(bool checked)
{
    if(checked==true){
        ui->ccinfo->setVisible(true);
    }
}


void checkout::on_Pay_clicked()
{
    hide();
    QMessageBox complete;
    complete.setInformativeText("Checkout Successful, Your Order is On Its Way!");
    complete.setFixedSize(500, 200);

}


void checkout::on_cancel_clicked()
{
    hide();
}


#include "addproduct.h"
#include "QtWidgets/qmessagebox.h"
#include "ui_addproduct.h"
#include "products.h"


addproduct::addproduct(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::addproduct)
{
    ui->setupUi(this);
}

addproduct::~addproduct()
{
    delete ui;
}

void addproduct::on_addProd_clicked()
{
    if(ui->prodName->text() != "" || ui->priceProd->text() != "" || ui->avaProd->text() != ""){
        productslist.push_back(ui->prodName->text().toStdString());
        prices.push_back(ui->priceProd->text().toDouble());
        availability.push_back(ui->avaProd->text().toInt());
        QMessageBox complete;
        complete.setInformativeText("Product has been Successfully Added");
        complete.setFixedSize(500, 200);
    }
    else{
        QMessageBox errorMessage;
        errorMessage.critical(0, "Error", "Please Fill Missing Information");
        errorMessage.setFixedSize(500, 200);
    }

}

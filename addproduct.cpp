#include "addproduct.h"
#include "QtWidgets/qmessagebox.h"
#include "createcategory.h"
#include "ui_addproduct.h"
#include "products.h"
#include <fstream>
#include <QLabel>
#include "products.h"

addproduct::addproduct(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::addproduct)
{
    ui->setupUi(this);
    for(string i: category){
        ui->categoryProd->addItem(QString::fromStdString(i));
    }
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
        category.push_back(ui->categoryProd->currentText().toStdString());
        //QString l=ui->prodName->text();
        //l=ui->prodName->text();
       // QLabel *label = new QLabel (l,products);
        prodAdded++;

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


void addproduct::on_createCat_clicked()
{
    createCategory* cC = new createCategory();
    cC->show();
}


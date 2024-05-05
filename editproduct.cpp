#include "editproduct.h"
#include "QtWidgets/qmessagebox.h"
#include "products.h"
#include "ui_editproduct.h"

int editproduct::getIndex(vector<string> v, string un)
{
    auto iter = ::find(v.begin(), v.end(), un);

    if (iter != v.end())
    {
        int index = iter - v.begin();
        return index;
    }
    else {
        return -1;
    }
}

editproduct::editproduct(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::editproduct)
{
    ui->setupUi(this);
    for(string i: category){
        ui->newCat->addItem(QString::fromStdString(i));
    }
}

editproduct::~editproduct()
{
    delete ui;
}

void editproduct::on_saveProd_clicked()
{
    int index = 0;
    index = getIndex(productslist, ui->oldName->text().toStdString());
    if(index >= 0){

        if(ui->newName->text().toStdString() != ""){
            productslist[index] = ui->newName->text().toStdString();
        }

        if(!(ui->newAva->text().toInt() < 0)){
            availability[index] = ui->newAva->text().toInt();
        }

        if(!(ui->newPrice->text().toDouble() < 0)){
            prices[index] = ui->newPrice->text().toDouble();
        }

        if(ui->newCat->currentText().toStdString() != ""){
             category[index] = ui->newCat->currentText().toStdString();
        }

        QMessageBox complete;
        complete.setInformativeText("Product has been Successfully Edited");
        complete.setFixedSize(500, 200);
    }
    else{
        QMessageBox errorMessage;
        errorMessage.critical(0, "Error", "Product Not Found");
        errorMessage.setFixedSize(500, 200);
    }
}


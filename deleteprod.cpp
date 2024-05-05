#include "deleteprod.h"
#include "QtWidgets/qmessagebox.h"
#include "ui_deleteprod.h"
#include "products.h"

int deleteprod::getIndex(vector<string> v, string un)
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

deleteprod::deleteprod(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::deleteprod)
{
    ui->setupUi(this);
}

deleteprod::~deleteprod()
{
    delete ui;
}

void deleteprod::on_deleteButton_clicked()
{
    int index = 0;
    index = getIndex(productslist, ui->prodName->text().toStdString());
    if(index >= 0){
        productslist.erase(productslist.begin() + index);
        prices.erase(prices.begin() + index);
        availability.erase(availability.begin() + index);
        category.erase(category.begin() + index);
        QMessageBox complete;
        complete.setInformativeText("Product has been Successfully Deleted");
        complete.setFixedSize(500, 200);
        hide();
    }
    else{
        QMessageBox errorMessage;
        errorMessage.critical(0, "Error", "Product Not Found");
        errorMessage.setFixedSize(500, 200);
    }
}


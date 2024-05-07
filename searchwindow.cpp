#include "searchwindow.h"
#include "QtWidgets/qmessagebox.h"
#include "searchresults.h"
#include "ui_searchwindow.h"
#include "products.h"
#include <QLabel>

searchwindow::searchwindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::searchwindow)
{
    ui->setupUi(this);
}

searchwindow::~searchwindow()
{
    delete ui;
}

void searchwindow::on_search_clicked()
{
    std::string searchQuery = ui->queryBox->text().toStdString();
    string result;
    for(string result : productslist){
        if(searchQuery == result){
            /*hide();
            searchresults* sR = new searchresults();
            sR->show();*/
            QLabel *label=new QLabel(QString::fromStdString(result));
            label->show();
        }
        else {
            QMessageBox errorMessage;
            errorMessage.critical(0, "Error", "Product Not Found");
            errorMessage.setFixedSize(500, 200);
        }
    }
}



void searchwindow::on_back_clicked()
{
    hide (); // hiding this page
    products* backtoprod = new products (this); //creating a new window of type products
    backtoprod -> show();
}


#include "products.h"
#include "QtWidgets/qmessagebox.h"
#include "ui_products.h"
#include "cart.h"
#include "searchwindow.h"
#include <fstream>

std::vector<std::string> productslist = {"Bananas", "Water", "Potatoes", "Chips"};
std::vector<double> prices = {3.00, 2.50, 4.00, 3.50};
std::vector<int> availability = {2, 1, 4, 6};
std::vector<std::string> category = {"Fruits", "Beverages", "Vegetables", "Snacks"};
int prodAdded = 4;
int catAdded = 4;

products::products(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::products)
{
    ui->setupUi(this);
    ui-> na1 -> setVisible(false);
    ui-> na2 -> setVisible(false);
    ui-> na3 -> setVisible(false);
    ui-> na4 -> setVisible(false);

    string readPn;
    string readPp;
    string readPa;
    string readPc;

    ifstream pnfile;
    ifstream ppfile;
    ifstream pafile;
    ifstream pcfile;

    pnfile.open(":/prodInfo/Product Info/productlist.txt");
    ppfile.open(":/prodInfo/Product Info/prices.txt");
    pafile.open(":/prodInfo/Product Info/availability.txt");
    pcfile.open(":/prodInfo/Product Info/category.txt");

    if(pnfile.fail()){
        QMessageBox errorMessage;
        errorMessage.critical(0, "Error", "Error Loading Products");
        errorMessage.setFixedSize(500, 200);
        return;
    }

    while(!pnfile.eof()){
        getline(pnfile, readPn);
        productslist.push_back(readPn);
        prodAdded++;
    }

    pnfile.close();

    if(ppfile.fail()){
        QMessageBox errorMessage;
        errorMessage.critical(0, "Error", "Error Loading Products");
        errorMessage.setFixedSize(500, 200);
        return;
    }

    while(!ppfile.eof()){
        getline(ppfile, readPp);
        prices.push_back(stod(readPp));
    }

    ppfile.close();

    pnfile.close();

    if(pafile.fail()){
        QMessageBox errorMessage;
        errorMessage.critical(0, "Error", "Error Loading Products");
        errorMessage.setFixedSize(500, 200);
        return;
    }

    while(!pafile.eof()){
        getline(pafile, readPa);
        availability.push_back(stoi(readPa));
    }

    pafile.close();

    pcfile.close();

    if(pcfile.fail()){
        QMessageBox errorMessage;
        errorMessage.critical(0, "Error", "Error Loading Products");
        errorMessage.setFixedSize(500, 200);
        return;
    }

    while(!pcfile.eof()){
        getline(pcfile, readPc);
        category.push_back(readPc);
    }

    ppfile.close();
}
products::~products()
{
    delete ui;
}

void products::on_product1_clicked()
{
    if(availability[0]<1){
        ui-> na1 -> setVisible(true);
    }
    else{
        availability[0]--;}
}
void products::on_product2_clicked()
{
    if(availability[1]<1){
        ui-> na2 -> setVisible(true);
    }
    else{
        availability[1]--;}
}
void products::on_product3_clicked()
{
    if(availability[2]<1){
        ui-> na3 -> setVisible(true);
    }
    else{
        availability[2]--;}
}
void products::on_product4_clicked()
{
    if(availability[3]<1){
        ui-> na4 -> setVisible(true);
    }
    else{
        availability[3]--;}
}
void products::on_gotocart_clicked()
{
    hide (); // hiding this page
    cart* cartwindow = new cart (this);
    cartwindow -> show();
}

void products::on_searchbutton_clicked()
{
    hide (); // hiding this page
    searchwindow* searchpage = new searchwindow (this);
    searchpage -> show();
}


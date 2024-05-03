#include "products.h"
#include "ui_products.h"
#include "cart.h"

std::vector<std::string> productslist = {"product1", "product2", "product3", "product4"};
std::vector<double> prices = {50.0, 30.0, 40.0, 35.0};
std::vector<int> availability = {2, 1, 4, 6};
std::vector<std::string> category = {"category1", "category2", "category1", "category2"};

products::products(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::products)
{
    ui->setupUi(this);
    ui-> na1 -> setVisible(false);
    ui-> na2 -> setVisible(false);
    ui-> na3 -> setVisible(false);
    ui-> na4 -> setVisible(false);
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
    cart* cartwindow = new cart (this); //creating a new window of type WelcomeWindow
    cartwindow -> show();
}
void searchbyname(){}
void searchbycategory(){}


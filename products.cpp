#include "products.h"
#include "ui_products.h"
#include "cart.h"
#include "searchwindow.h"

std::vector<std::string> productslist = {"Bananas", "Water", "Potatoes", "Chips"};
std::vector<double> prices = {3.00, 2.50, 4.00, 3.50};
std::vector<int> availability = {2, 1, 4, 6};
std::vector<std::string> category = {"Fruits", "Vegetables", "Beverages", "Snacks"};
int prodAdded = 4;

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
    cart* cartwindow = new cart (this);
    cartwindow -> show();
}

void products::on_searchbutton_clicked()
{
    hide (); // hiding this page
    searchwindow* searchpage = new searchwindow (this);
    searchpage -> show();
}


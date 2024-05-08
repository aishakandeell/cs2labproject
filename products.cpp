#include "products.h"
#include "QtWidgets/qmessagebox.h"
#include "ui_products.h"
#include "cart.h"
#include "searchwindow.h"
#include <QMessageBox>
#include "login.h"
#include <stack>
using namespace std;

std::vector<std::string> productslist = {"Bananas", "Water", "Potatoes", "Chips"};
std::vector<double> prices = {3.00, 2.50, 4.00, 3.50};
std::vector<int> availability = {2, 1, 4, 6};
std::vector<std::string> category = {"Fruits", "Beverages", "Vegetables", "Snacks"};
int prodAdded;

products::products(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::products)
{
    ui->setupUi(this);
    ui-> na1 -> setVisible(false);
    ui-> na2 -> setVisible(false);
    ui-> na3 -> setVisible(false);
    ui-> na4 -> setVisible(false);
    ui-> added->setVisible(false);

    ui->prod1->setText(QString::fromStdString(productslist[0]));
    ui->prod2->setText(QString::fromStdString(productslist[1]));
    ui->prod3->setText(QString::fromStdString(productslist[2]));
    ui->prod4->setText(QString::fromStdString(productslist[3]));
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
        availability[0]--;
        cartt.push( productslist[0]);
        prodAdded++;
        cart::updateprice(0);
        ui->added->setText(QString::number(prodAdded) + " Products Added to Cart");
    }

}
void products::on_product2_clicked()
{
    if(availability[1]<1){
        ui-> na2 -> setVisible(true);
    }
    else{
        availability[1]--;
        cartt.push( productslist[1]);

        prodAdded++;
        cart::updateprice(1);
        ui->added->setText(QString::number(prodAdded) + " Products Added to Cart");}
}
void products::on_product3_clicked()
{
    if(availability[2]<1){
        ui-> na3 -> setVisible(true);
    }
    else{
        availability[2]--;
        cartt.push( productslist[2]);

        prodAdded++;
        cart::updateprice(2);
        ui->added->setText(QString::number(prodAdded) + " Products Added to Cart");}
}
void products::on_product4_clicked()
{
    if(availability[3]<1){
        ui-> na4 -> setVisible(true);
    }
    else{
        availability[3]--;
        cartt.push(productslist[3]);

        prodAdded++;
        cart::updateprice(3);
        ui->added->setText(QString::number(prodAdded) + " Products Added to Cart");}

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


void products::on_nextPage_clicked()
{
    hide();
    products* pN = new products(this);
    pN->show();
}


void products::on_login_clicked()
{
    hide(); // hiding this page
    login* loginpage = new login(this);
    loginpage->show();
}


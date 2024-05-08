#include "cart.h"
#include "checkout.h"
#include "products.h"
#include "ui_cart.h"
#include <stack>
#include "registrationwindow.h"
#include <string>
using namespace std;

double totalprice=0.0;


int cart::getIndex(const std::string& name, const std::vector<std::string>& un)
{
    for (size_t i = 0; i < un.size(); ++i) {
        if (un[i] == name) {
            return i; // Return index if found
        }
    }
    return -1; // Return -1 if not found
}

std::stack<std::string> cartt;
cart::cart(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::cart)
{

    ui->setupUi(this);
   // totalprice = prices[getIndex(cartt,ui->productname->text().toStdString())];
    ui->totalprice->setText(QString::number(totalprice));
    displayCartItems();

}

cart::~cart()
{
    delete ui;
}

void cart::displayCartItems()
{
    QString cartContent; // String to hold concatenated cart items

    while (!cartt.empty())
    {
        std::string item = cartt.top();
        cartt.pop();

        cartContent += QString::fromStdString(item) + "\n"; // Concatenate item with a newline
    }

    ui->cartlabel->setText(cartContent);
}

void cart::on_remove_clicked()
{
    if (cartt.empty()) {
        // Handle case when cart is empty
        return;
    }

    // Get the last product in the stack
    std::string temp = cartt.top();

    // Remove the last product from the stack
    cartt.pop();

    // Call getIndex function to get the index of the last product
    int index = getIndex(temp, productslist);
    totalprice=totalprice-prices[index];
    string totalPriceString = to_string(totalprice);
    ui->totalprice->setText(QString::fromStdString(totalPriceString));
    ui->price->setVisible(false);
    ui->quantity->setVisible(false);
}


void cart::on_gotocatalog_clicked()
{
    hide();
    products* pD = new products();
    pD->show();
}


void cart::on_checkout_clicked()
{
    checkout* cO = new checkout();
    cO->show();
}


void cart::updateprice(int i){
    totalprice = totalprice+ prices[i];

}


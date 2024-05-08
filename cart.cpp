#include "cart.h"
#include "checkout.h"
#include "products.h"
#include "ui_cart.h"
using namespace std;

double totalprice=0;


int cart::getIndex(vector<string> v, string un)
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

std::vector<std::string> cartt={"empty"};

cart::cart(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::cart)
{

    ui->setupUi(this);
    totalprice = prices[getIndex(cartt,ui->productname->text().toStdString())];
    ui->totalprice->setText("Total Price : " + QString::number(totalprice));
}

cart::~cart()
{
    delete ui;
}



void cart::on_remove_clicked()
{
    int index= getIndex(cartt,ui->productname->text().toStdString());
    cartt.erase(cartt.begin()+index);
    ui->productname->setVisible(false);
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


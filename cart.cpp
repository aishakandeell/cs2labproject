#include "cart.h"
#include "ui_cart.h"

extern std::vector<std::string> cartt;

cart::cart(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::cart)
{
    ui->setupUi(this);
}

cart::~cart()
{
    delete ui;
}

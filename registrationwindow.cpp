#include "registrationwindow.h"
#include "ui_registrationwindow.h"
#include "products.h"
using namespace std;
int numregistered = 0; // Define numregistered
vector<string> usernames;
vector<string> passwords;
registrationwindow::registrationwindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::registrationwindow)
{
    ui->setupUi(this);
}

registrationwindow::~registrationwindow()
{
    delete ui;
}

void registrationwindow::on_registerclicked_clicked()
{
    std::string username = ui->usernamer->text().toStdString();
    std::string password = ui->passwordr->text().toStdString();
    usernames.push_back(username);
    passwords.push_back(password);
    numregistered++;
    //go to products page
    hide (); // hiding this page
    products* productswindow = new products (this);
    productswindow -> show();
}



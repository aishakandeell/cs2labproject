#include "login.h"
#include "QtWidgets/qmessagebox.h"
#include "ui_login.h"
#include "registrationwindow.h"
#include "products.h"
#include "userpage.h"
#include <fstream>

login::login(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::login)
{
    ui->setupUi(this);
    ui-> loginerror -> setVisible(false);
}

login::~login()
{
    delete ui;
}

void login::on_login2_clicked()
{

    std::string username = ui->usernamel->text().toStdString();
    std::string password = ui->passwordl->text().toStdString();

    for(int i=0; i<=numregistered;i++){

        if (( username == usernames[i])&&(password == passwords[i])){
            //go to products page
            hide (); // hiding this page
            products* productswindow = new products (this); //creating a new window of type products
            productswindow -> show();

        }
        ui-> loginerror -> setVisible(false);
        ui -> usernamel -> setText ("");
        ui -> passwordl -> setText ("");
        ui-> loginerror -> setVisible(true);
    }


}


void login::on_backtoregister_clicked()
{
    hide (); // hiding this page
    userpage* backtoreg = new userpage (this); //creating a new window of type products
    backtoreg -> show();
}


#include "userpage.h"
#include "adminplat.h"
#include "ui_userpage.h"
#include "registrationwindow.h"
#include "login.h"

userpage::userpage(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::userpage)
{
    ui->setupUi(this);
    QPixmap icon(":/icons/Icons/store.png");
    int w = ui->labelIcon->width();
    int h = ui->labelIcon->height();
    ui->labelIcon->setPixmap(icon.scaled(w,h,Qt::KeepAspectRatio));
}

userpage::~userpage()
{
    delete ui;
}

void userpage::on_loginclicked_clicked()
{
    //redirect to register page
    hide (); // hiding this page
    login* loginwindow = new login (this); //creating a new window of type Register
    loginwindow -> show();
}

void userpage::on_registerclicked_clicked()
{
    //redirect to register page
    hide (); // hiding this page
    registrationwindow* registerwindow = new registrationwindow (this); //creating a new window of type Register
    registerwindow -> show();
}

void userpage::on_adminbutton_clicked(){

    hide();
    adminplat* admin = new adminplat();
    admin->show();

}

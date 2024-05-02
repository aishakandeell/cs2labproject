#include "login.h"
#include "ui_login.h"
#include "registrationwindow.h"

login::login(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::login)
{
    ui->setupUi(this);
}

login::~login()
{
    delete ui;
}

void login::on_login2_clicked()
{
    /*if(check if the account is registered){
     open products page
}
else{
redirect to registration window
}*/
}


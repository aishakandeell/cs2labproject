#include "registrationwindow.h"
#include "ui_registrationwindow.h"

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

    std::pair<std::string, std::string> account(username, password);

    accounts.push_back(account);
    //open products page
}


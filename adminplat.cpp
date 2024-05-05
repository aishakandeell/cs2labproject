#include "adminplat.h"
#include "adminsettings.h"
#include "changeadminp.h"
#include "ui_adminplat.h"

adminplat::adminplat(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::adminplat)
{
    ui->setupUi(this);
    ui->incorrect->hide();
}

adminplat::~adminplat()
{
    delete ui;
}

void adminplat::on_pushButton_clicked()
{
    if(ui->adminPass->text() == adminp){
        hide();
        adminSettings* aS = new adminSettings();
        aS->show();
    }
    else{
        ui->incorrect->show();
        ui->adminPass->setText("");
    }
}



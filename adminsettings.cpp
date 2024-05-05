#include "adminsettings.h"
#include "addproduct.h"
#include "deleteprod.h"
#include "deleteuser.h"
#include "editproduct.h"
#include "edituser.h"
#include "registrationwindow.h"
#include "ui_adminsettings.h"
#include "ui_edituser.h"

adminSettings::adminSettings(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::adminSettings)
{
    ui->setupUi(this);
}

adminSettings::~adminSettings()
{
    delete ui;
}

void adminSettings::on_addUser_clicked()
{
    registrationwindow* rW = new registrationwindow();
    rW->show();
}


void adminSettings::on_editUser_clicked()
{
    edituser* eU = new edituser();
    eU->show();
}


void adminSettings::on_deleteUser_clicked()
{
    deleteuser* dU = new deleteuser();
    dU->show();
}


void adminSettings::on_addProd_clicked()
{
    addproduct* aP = new addproduct();
    aP->show();
}


void adminSettings::on_editProd_clicked()
{
    editproduct* eP = new editproduct();
    eP->show();
}


void adminSettings::on_deleteProd_clicked()
{
    deleteprod* dP = new deleteprod();
    dP->show();
}


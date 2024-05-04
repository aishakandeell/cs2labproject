#include "adminsettings.h"
#include "deleteuser.h"
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
    hide();
    edituser* eU = new edituser();
    eU->show();
}


void adminSettings::on_deleteUser_clicked()
{
    hide();
    deleteuser* dU = new deleteuser();
    dU->show();
}


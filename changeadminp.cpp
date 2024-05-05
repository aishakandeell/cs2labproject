#include "changeadminp.h"
#include "QtWidgets/qmessagebox.h"
#include "ui_changeadminp.h"
#include "adminplat.h"

changeadminp::changeadminp(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::changeadminp)
{
    ui->setupUi(this);
}

changeadminp::~changeadminp()
{
    delete ui;
}

void changeadminp::on_saveButton_clicked()
{
    if(ui->oldAdminP->text().toStdString() == adminp){
        adminp = ui->newAdminP->text().toStdString();
        QMessageBox complete;
        complete.setInformativeText("Password has been Successfully Changed");
        complete.setFixedSize(500, 200);
        hide();
    }
    else{
        QMessageBox errorMessage;
        errorMessage.critical(0, "Error", "Fields are empty or Old Password Incorrect");
        errorMessage.setFixedSize(500, 200);
    }
}


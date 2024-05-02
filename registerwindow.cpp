#include "registerwindow.h"
#include "ui_register.h"

registerwindow ::registerwindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::register)
{
    ui->setupUi(this);
}

registerwindow ::~registerwindow()
{
    delete ui;
}

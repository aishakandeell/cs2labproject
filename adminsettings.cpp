#include "adminsettings.h"
#include "ui_adminsettings.h"

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

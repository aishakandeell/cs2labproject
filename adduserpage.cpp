#include "adduserpage.h"
#include "ui_adduserpage.h"

adduserpage::adduserpage(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::adduserpage)
{
    ui->setupUi(this);
}

adduserpage::~adduserpage()
{
    delete ui;
}

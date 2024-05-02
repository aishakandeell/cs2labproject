#include "mainpage.h"
#include "ui_mainpage.h"

main::main(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::main)
{
    ui->setupUi(this);
}

main::~main()
{
    delete ui;
}

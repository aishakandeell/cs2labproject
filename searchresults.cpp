#include "searchresults.h"
#include "ui_searchresults.h"

searchresults::searchresults(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::searchresults)
{
    ui->setupUi(this);
}

searchresults::~searchresults()
{
    delete ui;
}

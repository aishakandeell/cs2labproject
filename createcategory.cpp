#include "createcategory.h"
#include "QtWidgets/qmessagebox.h"
#include "addproduct.h"
#include "ui_createcategory.h"
#include "products.h"
#include <fstream>

createCategory::createCategory(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::createCategory)
{
    ui->setupUi(this);
}

createCategory::~createCategory()
{
    delete ui;
}

void createCategory::on_catAdd_clicked()
{
    if(ui->catName->text() != ""){
        ofstream pcFile(":/prodInfo/Product Info/category.txt");
        pcFile << ui->catName->text().toStdString();
        pcFile.close();

        category.push_back(ui->catName->text().toStdString());
        string newCat = ui->catName->text().toStdString();
        QMessageBox complete;
        complete.setInformativeText("Category has been Successfully Created");
        complete.setFixedSize(500, 200);
        hide();
    }
    else{
        QMessageBox errorMessage;
        errorMessage.critical(0, "Error", "Fields are empty");
        errorMessage.setFixedSize(500, 200);
    }
}


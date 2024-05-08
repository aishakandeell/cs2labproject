#include "searchwindow.h"
#include "QtWidgets/qmessagebox.h"
#include "searchresults.h"
#include "ui_searchwindow.h"
#include "products.h"
#include <QLabel>
using namespace std;
searchwindow::searchwindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::searchwindow)
{
    ui->setupUi(this);
}

searchwindow::~searchwindow()
{
    delete ui;
}

void searchwindow::on_search_clicked()
{
    string searchQuery = ui->queryBox->text().toStdString();
    bool found = false;

    for (size_t i = 0; i < productslist.size(); ++i) {
        if (searchQuery == productslist[i]) {
            // Construct the text to be displayed on the QLabel
            QString labelText = QString::fromStdString(productslist[i]) + "\n";
            labelText += "Price: $" + QString::number(prices[i]) + "\n";
            labelText += "Availability: " + QString::number(availability[i]) + "\n";
            labelText += "Category: " + QString::fromStdString(category[i]);

            // Display the result label on the same window
            QLabel *label = new QLabel(labelText, this);
            label->move(100, 100); // Adjust position as needed
            label->show();
            found = true;
            break; // Stop searching once the result is found
        }
    }

    if (!found) {
        QMessageBox errorMessage;
        errorMessage.critical(0, "Error", "Product Not Found");
        errorMessage.setFixedSize(500, 200);
        errorMessage.exec(); // Show the error message dialog
    }
}



void searchwindow::on_back_clicked()
{
    hide (); // hiding this page
    products* backtoprod = new products (this); //creating a new window of type products
    backtoprod -> show();
}


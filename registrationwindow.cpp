#include "registrationwindow.h"
#include "QtWidgets/qmessagebox.h"
#include "ui_registrationwindow.h"
#include "products.h"

using namespace std;

int numregistered = 0; // Define numregistered
vector<string> usernames={"user1"};
vector<string> passwords={"123"};
vector<string> emails={"user@"};

registrationwindow::registrationwindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::registrationwindow)
{
    ui->setupUi(this);
    ui-> usernameexists -> setVisible(false);
    ui-> emailexists -> setVisible(false);
}

registrationwindow::~registrationwindow()
{
    delete ui;
}

void registrationwindow::on_registerclicked_clicked()
{
    string username = ui->usernamer->text().toStdString();
    string password = ui->passwordr->text().toStdString();
    string email=ui->emailr->text().toStdString();


    for(int i=0;i<numregistered;i++){
        if(usernames[i]==username) {
            ui-> usernameexists -> setVisible(true);
            ui -> usernamer -> setText ("");
        }
        if(emails[i]==email){
            ui-> emailexists -> setVisible(true);
            ui -> passwordr -> setText ("");
        }
    }

    usernames.push_back(username);
    passwords.push_back(password);
    numregistered++;
    //go to products page
    hide (); // hiding this page
    products* productswindow = new products (this);
    productswindow -> show();
}


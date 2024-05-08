#include "registrationwindow.h"
#include "QtWidgets/qmessagebox.h"
#include "ui_registrationwindow.h"
#include "products.h"
#include <QFile>
#include <fstream> // For file I/O
#include <sstream> // For string manipulation
#include "login.h"
using namespace std;


int numregistered = 0;
vector<string> usernames={"ai"};
vector<string> passwords={"123"};
vector<string> emails;
const string filename = "users.txt"; // File to store user data

registrationwindow::registrationwindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::registrationwindow)
{
    ui->setupUi(this);
    ui->usernameexists->setVisible(false);
    ui->emailexists->setVisible(false);

    // Read user data from file
    readUserData();
}

registrationwindow::~registrationwindow()
{
    delete ui;
}

void registrationwindow::readUserData() {
    ifstream file(filename);
    if (file.is_open()) {
        string line;
        while (getline(file, line)) {
            istringstream i(line);
            string username, password, email;
            if (i >> username >> password >> email) {
                usernames.push_back(username);
                passwords.push_back(password);
                emails.push_back(email);
                numregistered++;
            }
        }
        file.close();
    }
}

void registrationwindow::writeUserData() {

    ofstream file(filename, ios::trunc); // Truncate file if it exists
    if (file.is_open()) {
        for (int i = 0; i < numregistered; ++i) {
            file << usernames[i] << " " << passwords[i] << " " << emails[i] << endl;
        }
        file.close();
    }

}

void registrationwindow::deleteUserFromData(int r){
    std::ifstream inFile(filename);
    if (!inFile.is_open()) {
        //label error in deleting
    }

    vector<std::string> lines;
    string line;
    int i;
    while (getline(inFile, line)) {
        // Check if this line contains the username to delete
        if (i!=r) {
            lines.push_back(line); // Add line to vector if username is not found
        }
        i++;
    }
    inFile.close();

    ofstream outFile(filename, ios::trunc); // Open file for writing, truncating previous content

    for (const auto& l : lines) {
        outFile << l << std::endl; // Write all lines except the one to delete
    }
    outFile.close();
}

void registrationwindow::on_registerclicked_clicked()
{
    string username = ui->usernamer->text().toStdString();
    string password = ui->passwordr->text().toStdString();
    string email = ui->emailr->text().toStdString();

    // Check if username or email already exist
    bool userExists = false;
    bool emailExists = false;
    for (int i = 0; i < numregistered; i++) {
        if (usernames[i] == username) {
            userExists = true;
            break;
        }
        if (emails[i] == email) {
            emailExists = true;
            break;
        }
    }

    // Show appropriate message if username or email already exists
    if (userExists) {
        ui->usernameexists->setVisible(true);
        ui->usernamer->setText("");
    }
    if (emailExists) {
        ui->emailexists->setVisible(true);
        ui->passwordr->setText("");
    }

    // Register the user if username and email are unique
    if (!userExists && !emailExists) {
        usernames.push_back(username);
        passwords.push_back(password);
        emails.push_back(email);
        numregistered++;

        // Write updated user data to file
        writeUserData();

        // Go to products page
        hide(); // hiding this page
        products* productswindow = new products(this);
        productswindow->show();
    }
}

void registrationwindow::on_login_clicked()
{
    hide(); // hiding this page
    login* loginpage = new login(this);
    loginpage->show();
}


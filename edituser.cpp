#include "edituser.h"
#include "ui_edituser.h"
#include "registrationwindow.h"
#include <QMessageBox>
using namespace std;

int edituser::getIndex(vector<string> v, string un)
{
    auto iter = ::find(v.begin(), v.end(), un);

    if (iter != v.end())
    {
        int index = iter - v.begin();
        return index;
    }
    else {
        return -1;
    }
}

edituser::edituser(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::edituser)
{
    ui->setupUi(this);
}

edituser::~edituser()
{
    delete ui;
}

void edituser::on_saveButton_clicked()
{
    int index = 0;
    index = getIndex(usernames, ui->oldUser->text().toStdString());
    if(index >= 0){

        if(ui->newUser->text().toStdString() != ""){
            usernames[index] = ui->newUser->text().toStdString();
        }

        if(ui->newPass->text().toStdString() != ""){
            passwords[index] = ui->newPass->text().toStdString();
        }

        QMessageBox complete;
        complete.setInformativeText("User has been Successfully Edited");
        complete.setFixedSize(500, 200);
        registrationwindow::writeUserData();
    }
    else{
        QMessageBox errorMessage;
        errorMessage.critical(0, "Error", "Username Not Found");
        errorMessage.setFixedSize(500, 200);
    }
}


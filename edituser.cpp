#include "edituser.h"
#include "ui_edituser.h"
#include "registrationwindow.h"
#include <vector>
using namespace std;

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
    int j = 0;
    while(j < numregistered){
        if(ui->oldUser->text().toStdString() != usernames[j]){
            j++;
        }
        else{
            if(ui->newUser->text() != ""){
                usernames.insert(usernames.begin()+j, ui->newUser->text().toStdString());
            }

            if(ui->newPass->text() != ""){
                passwords.insert(passwords.begin()+j, ui->newUser->text().toStdString());
            }
        }
    }
    hide();
}


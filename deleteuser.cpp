#include "deleteuser.h"
#include "QtWidgets/qmessagebox.h"
#include "registrationwindow.h"
#include "ui_deleteuser.h"
#include <vector>
using namespace std;

int deleteuser::getIndex(vector<string> v, string un)
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

deleteuser::deleteuser(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::deleteuser)
{
    ui->setupUi(this);
}

deleteuser::~deleteuser()
{
    delete ui;
}

void deleteuser::on_deleteButton_clicked()
{
    int index = 0;
    index = getIndex(usernames, ui->userDelete->text().toStdString());
    if(index >= 0){
        usernames.erase(usernames.begin() + index);
        passwords.erase(passwords.begin() + index);
        QMessageBox complete;
        complete.setInformativeText("User has been Successfully Deleted");
        complete.setFixedSize(500, 200);
    }
    else{
        QMessageBox errorMessage;
        errorMessage.critical(0, "Error", "Username Not Found");
        errorMessage.setFixedSize(500, 200);
    }
    hide();
}


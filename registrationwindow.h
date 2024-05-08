#ifndef REGISTRATIONWINDOW_H
#define REGISTRATIONWINDOW_H
#include <vector>
#include <QDialog>
#include <string>
using namespace std;
extern int numregistered; // Declare count as extern
extern vector<string> usernames; // Declare usernames vector as extern
extern vector<string> passwords; // Declare passwords vector as extern
extern vector<string> emails;
namespace Ui {
class registrationwindow;
}

class registrationwindow : public QDialog
{
    Q_OBJECT

public:
    explicit registrationwindow(QWidget *parent = nullptr);
    ~registrationwindow();
    void readUserData();
    void writeUserData();

private slots:
    void on_registerclicked_clicked();

private:
    Ui::registrationwindow *ui;

};

#endif // REGISTRATIONWINDOW_H

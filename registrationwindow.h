#ifndef REGISTRATIONWINDOW_H
#define REGISTRATIONWINDOW_H
#include <vector>
#include <QDialog>

extern int numregistered; // Declare count as extern
extern std::vector<std::string> usernames; // Declare usernames vector as extern
extern std::vector<std::string> passwords; // Declare passwords vector as extern

namespace Ui {
class registrationwindow;
}

class registrationwindow : public QDialog
{
    Q_OBJECT

public:
    explicit registrationwindow(QWidget *parent = nullptr);
    ~registrationwindow();
    /*std::vector<std::string> usernames;
    std::vector<std::string> passwords;
    static int count;
*/

private slots:
    void on_registerclicked_clicked();

private:
    Ui::registrationwindow *ui;
    int numregistered = 0; // Define count
    std::vector<std::string> usernames; // Define usernames vector
    std::vector<std::string> passwords; // Define passwords vector
};

#endif // REGISTRATIONWINDOW_H

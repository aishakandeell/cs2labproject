#ifndef EDITUSER_H
#define EDITUSER_H

#include <QDialog>

namespace Ui {
class edituser;
}

class edituser : public QDialog
{
    Q_OBJECT

public:
    explicit edituser(QWidget *parent = nullptr);
    ~edituser();
    int getIndex(std::vector<std::string> v, std::string un);

private slots:
    void on_saveButton_clicked();

private:
    Ui::edituser *ui;
};

#endif // EDITUSER_H

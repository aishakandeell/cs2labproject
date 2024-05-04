#ifndef DELETEUSER_H
#define DELETEUSER_H

#include <QDialog>

namespace Ui {
class deleteuser;
}

class deleteuser : public QDialog
{
    Q_OBJECT

public:
    explicit deleteuser(QWidget *parent = nullptr);
    ~deleteuser();
    int getIndex(std::vector<std::string> v, std::string un);

private slots:
    void on_deleteButton_clicked();

private:
    Ui::deleteuser *ui;
};

#endif // DELETEUSER_H

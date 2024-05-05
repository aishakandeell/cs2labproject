#ifndef EDITPRODUCT_H
#define EDITPRODUCT_H

#include <QDialog>

namespace Ui {
class editproduct;
}

class editproduct : public QDialog
{
    Q_OBJECT

public:
    explicit editproduct(QWidget *parent = nullptr);
    ~editproduct();
    int getIndex(std::vector<std::string> v, std::string un);

private slots:
    void on_saveProd_clicked();

private:
    Ui::editproduct *ui;
};

#endif // EDITPRODUCT_H

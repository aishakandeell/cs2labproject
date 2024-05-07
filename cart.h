#ifndef CART_H
#define CART_H
#include <vector>
#include <QDialog>
using namespace std;

extern std::vector<std::string> cartt;
namespace Ui {
class cart;
}

class cart : public QDialog
{
    Q_OBJECT

public:
    explicit cart(QWidget *parent = nullptr);
    ~cart();
    double totalprice=0;

private slots:

    void on_remove_clicked();


    void on_gotocatalog_clicked();

    void on_checkout_clicked();

private:
    int getIndex(vector<string> v,string un);
    Ui::cart *ui;
};

#endif // CART_H

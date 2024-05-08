#ifndef CART_H
#define CART_H
#include <vector>
#include <QDialog>
#include <stack>
using namespace std;
extern double totalprice;
extern std::stack<std::string> cartt;
namespace Ui {
class cart;
}

class cart : public QDialog
{
    Q_OBJECT

public:
    explicit cart(QWidget *parent = nullptr);
    ~cart();
   // double totalprice=0;
    static void updateprice(int i);

private slots:

    void on_remove_clicked();


    void on_gotocatalog_clicked();

    void on_checkout_clicked();

private:
    int getIndex(const std::string& name, const std::vector<std::string>& un);
    void displayCartItems();
    Ui::cart *ui;

};

#endif // CART_H

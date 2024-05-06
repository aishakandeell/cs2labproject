#ifndef PRODUCTS_H
#define PRODUCTS_H
#include <vector>

#include <QDialog>
using namespace std;
extern std::vector<std::string> productslist;
extern std::vector<double> prices;
extern std::vector<int> availability;
extern std::vector<std::string> category;
extern int prodAdded;
namespace Ui {
class products;
}

class products : public QDialog
{
    Q_OBJECT

public:
    explicit products(QWidget *parent = nullptr);
    ~products();
private slots:
    void on_product1_clicked();
    void on_product2_clicked();
    void on_product3_clicked();
    void on_product4_clicked();

    void on_gotocart_clicked();

    void on_searchbutton_clicked();

    void on_nextPage_clicked();

private:
    Ui::products *ui;
};

#endif // PRODUCTS_H

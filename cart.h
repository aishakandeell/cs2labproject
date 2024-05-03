#ifndef CART_H
#define CART_H

#include <QDialog>

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

private:
    Ui::cart *ui;
};

#endif // CART_H

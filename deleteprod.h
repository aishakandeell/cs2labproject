#ifndef DELETEPROD_H
#define DELETEPROD_H

#include <QDialog>

namespace Ui {
class deleteprod;
}

class deleteprod : public QDialog
{
    Q_OBJECT

public:
    explicit deleteprod(QWidget *parent = nullptr);
    ~deleteprod();
    int getIndex(std::vector<std::string> v, std::string un);

private slots:
    void on_deleteButton_clicked();

private:
    Ui::deleteprod *ui;
};

#endif // DELETEPROD_H

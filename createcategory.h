#ifndef CREATECATEGORY_H
#define CREATECATEGORY_H

#include <QDialog>

namespace Ui {
class createCategory;
}

class createCategory : public QDialog
{
    Q_OBJECT

public:
    explicit createCategory(QWidget *parent = nullptr);
    ~createCategory();

private slots:
    void on_catAdd_clicked();

private:
    Ui::createCategory *ui;
};

#endif // CREATECATEGORY_H

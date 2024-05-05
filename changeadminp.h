#ifndef CHANGEADMINP_H
#define CHANGEADMINP_H

#include <QDialog>
using namespace std;
namespace Ui {
class changeadminp;
}

class changeadminp : public QDialog
{
    Q_OBJECT

public:
    explicit changeadminp(QWidget *parent = nullptr);
    ~changeadminp();

private slots:
    void on_saveButton_clicked();

private:
    Ui::changeadminp *ui;
};

#endif // CHANGEADMINP_H

#ifndef REGISTRATIONWINDOW_H
#define REGISTRATIONWINDOW_H
#include <vector>
#include <QDialog>

namespace Ui {
class registrationwindow;
}

class registrationwindow : public QDialog
{
    Q_OBJECT

public:
    explicit registrationwindow(QWidget *parent = nullptr);
    ~registrationwindow();
    std::vector<std::pair<std::string, std::string>> accounts;

private slots:
    void on_registerclicked_clicked();

private:
    Ui::registrationwindow *ui;
};

#endif // REGISTRATIONWINDOW_H

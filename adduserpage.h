#ifndef ADDUSERPAGE_H
#define ADDUSERPAGE_H

#include <QDialog>

namespace Ui {
class adduserpage;
}

class adduserpage : public QDialog
{
    Q_OBJECT

public:
    explicit adduserpage(QWidget *parent = nullptr);
    ~adduserpage();

private:
    Ui::adduserpage *ui;
};

#endif // ADDUSERPAGE_H

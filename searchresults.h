#ifndef SEARCHRESULTS_H
#define SEARCHRESULTS_H

#include <QDialog>

namespace Ui {
class searchresults;
}

class searchresults : public QDialog
{
    Q_OBJECT

public:
    explicit searchresults(QWidget *parent = nullptr);
    ~searchresults();

private:
    Ui::searchresults *ui;
};

#endif // SEARCHRESULTS_H

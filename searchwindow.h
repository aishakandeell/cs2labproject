#ifndef SEARCHWINDOW_H
#define SEARCHWINDOW_H

#include "searchresults.h"
#include "ui_searchwindow.h"
#include <QDialog>

namespace Ui {
class searchwindow;
}

class searchwindow : public QDialog
{
    Q_OBJECT

public:
    explicit searchwindow(QWidget *parent = nullptr);
    ~searchwindow();

private slots:
    void on_search_clicked();

private:
    Ui::searchwindow *ui;
};

#endif // SEARCHWINDOW_H

#ifndef ADMINSETTINGS_H
#define ADMINSETTINGS_H

#include <QDialog>

namespace Ui {
class adminSettings;
}

class adminSettings : public QDialog
{
    Q_OBJECT

public:
    explicit adminSettings(QWidget *parent = nullptr);
    ~adminSettings();

private:
    Ui::adminSettings *ui;
};

#endif // ADMINSETTINGS_H

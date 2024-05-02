#ifndef USER_H
#define USER_H

#include <QObject>
#include <QString>

class user: public QObject
{
    Q_OBJECT
public:
    user(QObject *parent = nullptr);
    bool authenticate(const QString& username, const QString& password);
    void registerUser(const QString& username, const QString& password, const QString& email, const QString& name);
public slots:
    void login(const QString& username, const QString& password);
    void registerClicked(const QString& username, const QString& password, const QString& email, const QString& name);
};

#endif // USER_H

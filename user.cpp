#include "user.h"

user::user(QObject *parent): QObject(parent)  {}

bool user::authenticate(const QString& username, const QString& password) {
    //if inout match
    return true;
}

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addproduct.cpp \
    adminplat.cpp \
    adminsettings.cpp \
    cart.cpp \
    deleteuser.cpp \
    edituser.cpp \
    login.cpp \
    main.cpp \
    products.cpp \
    registrationwindow.cpp \
    searchwindow.cpp \
    userpage.cpp

HEADERS += \
    addproduct.h \
    adminplat.h \
    adminsettings.h \
    cart.h \
    deleteuser.h \
    edituser.h \
    login.h \
    products.h \
    registrationwindow.h \
    searchwindow.h \
    userpage.h

FORMS += \
    addproduct.ui \
    adminplat.ui \
    adminsettings.ui \
    cart.ui \
    deleteuser.ui \
    edituser.ui \
    login.ui \
    products.ui \
    registrationwindow.ui \
    searchwindow.ui \
    userpage.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    admin.cpp \
    cart.cpp \
    checkout.cpp \
    main.cpp \
    products.cpp \
    search.cpp \
    user.cpp

HEADERS += \
    admin.h \
    cart.h \
    checkout.h \
    products.h \
    search.h \
    user.h

FORMS += \
    admin.ui \
    cart.ui \
    checkout.ui \
    products.ui \
    search.ui \
    user.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

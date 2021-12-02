QT       += core gui


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11


# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    admin.cpp \
    adminscreen.cpp \
    booking.cpp \
    date.cpp \
    login.cpp \
    main.cpp \
    mainwindow.cpp \
    registration.cpp \
    room_choose.cpp

HEADERS += \
    admin.h \
    adminscreen.h \
    booking.h \
    date.h \
    login.h \
    mainwindow.h \
    registration.h \
    room_choose.h

FORMS += \
    admin.ui \
    adminscreen.ui \
    booking.ui \
    date.ui \
    login.ui \
    mainwindow.ui \
    registration.ui \
    room_choose.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource.qrc

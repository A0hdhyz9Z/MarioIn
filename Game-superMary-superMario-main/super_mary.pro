QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    brick.cpp \
    castle.cpp \
    difficulty_scence.cpp \
    fire.cpp \
    gamepause.cpp \
    infernal_scence.cpp \
    mypushbutton.cpp \
    gamehelp.cpp \
    gamescene.cpp \
    main.cpp \
    mainwindow.cpp \
    mary.cpp \
    master.cpp \
    mushroom.cpp \
    pipe.cpp \
    register.cpp \
    selectlevel.cpp \
    unknown.cpp

HEADERS += \
    brick.h \
    castle.h \
    difficulty_scence.h \
    fire.h \
    gamepause.h \
    infernal_scence.h \
    mypushbutton.h \
    gamehelp.h \
    gamescene.h \
    mainwindow.h \
    mary.h \
    master.h \
    mushroom.h \
    pipe.h \
    register.h \
    selectlevel.h \
    unknown.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc
ICON = icon.icns

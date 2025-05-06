TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        entity.cpp \
        main.cpp \
        player.cpp \
        printable.cpp

HEADERS += \
    entity.h \
    player.h \
    printable.h

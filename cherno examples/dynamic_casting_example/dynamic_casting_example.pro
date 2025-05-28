TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        enemy.cpp \
        entity.cpp \
        main.cpp \
        player.cpp

HEADERS += \
    enemy.h \
    entity.h \
    player.h

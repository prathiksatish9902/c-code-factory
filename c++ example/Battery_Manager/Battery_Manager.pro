TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        battery_manager.cpp \
        main.cpp \
        sound_manager.cpp

HEADERS += \
    battery_manager.h \
    sound_manager.h

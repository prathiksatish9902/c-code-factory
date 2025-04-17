QT += widgets

greaterThan(QT_MAJOR_VERSION, 4): QT += opengl

SOURCES += main.cpp \
           mainwindow.cpp

HEADERS += mainwindow.h

FORMS += mainwindow.ui

# Link OpenGL
unix: LIBS += -lGL
win32: LIBS += -lopengl32
macx: LIBS += -framework OpenGL

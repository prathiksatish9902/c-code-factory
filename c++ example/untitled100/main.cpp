#include "mainwindow.h"
#include"mywidget.h"
#include <QApplication>
#include<QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    MyWidget my;

    w.show();
    QPushButton button;
    button.show();
    // my.show();
    return a.exec();
}

#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QObject>

class MyWidget : public QObject
{
    Q_OBJECT
public:
    explicit MyWidget(QObject *parent = nullptr);

signals:
};

#endif // MYWIDGET_H

#ifndef ACCELARATOR_H
#define ACCELARATOR_H
#include<iostream>
#include"wheel.h"
#include"car.h"
class Accelarator
{

    Wheel *m_w;
    Car *m_c;
public:
    Accelarator();
    ~Accelarator();
    void set_accelarator(Wheel *w, Car *c);
    void accelarator_applied();
};

#endif // ACCELARATOR_H

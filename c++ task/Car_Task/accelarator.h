#ifndef ACCELARATOR_H
#define ACCELARATOR_H
#include<iostream>
#include"wheel.h"
#include"brake.h"
class Accelarator
{
    bool m_accelaratorPressed;
public:
    Wheel *w1;
    Brake *b1;
    Accelarator();
    ~Accelarator();
    void Accelarator_Applied(Wheel *w );
    void Accelarator_Released(Wheel *w);
};

#endif // ACCELARATOR_H

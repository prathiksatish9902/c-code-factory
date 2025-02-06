#ifndef A_H
#define A_H
#include "b.h"
class A
{
    int m_a;
    int m_b;
public:
    A(int a , int b);
    A();
    ~A();
    A operator+(const A &obj);
};

#endif // A_H

#ifndef B_H
#define B_H
#include"a.h"
class B
{
    int m_c;
    int m_d;
public:
    B(int c , int d);
    B();
    ~B();
    B operator+(const B &object);
};

#endif // B_H

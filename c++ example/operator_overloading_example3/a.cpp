#include "a.h"

A::A(int a, int b) {
    m_a = a;
    m_b = b;
}
A::A(){}
A::~A(){}

A A::operator+(const A &obj)
{
    A a1;
    a1.m_a = this->m_a + obj.m_b;
    a1.m_b = this->m_b + obj.m_b;
    return a1;
}

#include "b.h"

B::B(int c, int d) {
    m_c = c;
    m_d = d;
}
B::B(){}
B::~B()
{

}

B B::operator+(const B &object)
{
    B b1;
    b1.m_c = this->m_c + object.m_c;
    b1.m_d = this->m_d + object.m_d;

}

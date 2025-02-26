#include "space.h"

Space::Space(int a,int b,int c) {
    std::cout<<"constructor called"<<std::endl;

    m_a = a;
    m_b = b;
    m_c = c;
}

Space::Space()
{

}

Space::~Space()
{
    std::cout<<"destructor called"<<std::endl;

}

Space Space::operator-()
{
    Space sp;
    sp.m_a = -(this->m_a);
    sp.m_b = -(this->m_b);
    sp.m_c = -(this->m_c);
    return sp;
}

void Space::display()
{
    std::cout<<"display function called called"<<std::endl;
    std::cout<<"a:"<<m_a<<std::endl;
    std::cout<<"b:"<<m_b<<std::endl;
    std::cout<<"c:"<<m_c<<std::endl;


}




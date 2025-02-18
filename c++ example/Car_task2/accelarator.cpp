#include "accelarator.h"

Accelarator::Accelarator() {
    std::cout<<"accelarator constructor called"<<std::endl;

}


Accelarator::~Accelarator()
{
    std::cout<<"accelarator destructor called"<<std::endl;

}

void Accelarator::set_accelarator(Wheel *w, Car *c)
{
    std::cout<<"accelarator set function called"<<std::endl;
    m_w = w;
    m_c = c;

}


void Accelarator::accelarator_applied()
{
    std::cout<<"accelarator applied function called"<<std::endl;
    m_w->wheel_rotate();

}


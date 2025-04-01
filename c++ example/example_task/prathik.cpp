#include "prathik.h"
#include"darshan.h"

Prathik::Prathik() {
    std::cout<<"prathik constructor called"<<std::endl;
}

Prathik::~Prathik()
{
    std::cout<<"prathik destructor called"<<std::endl;

}

void Prathik::pushback(Darshan dars1)
{
    std::cout<<"pushback function called"<<std::endl;
    m_dars = &dars1;
    std::cout<<"hi"<<std::endl;
    darslist.push_back(dars1);
    std::cout<<"bye"<<std::endl;

}



#include "darshan.h"

Darshan::Darshan() {
    std::cout<<"darshan constructor called"<<std::endl;
}

Darshan::Darshan(const Darshan &d1)
{
    std::cout<<"darshan copy constructor called"<<std::endl;
    this->m_name = d1.m_name;
}

Darshan::~Darshan()
{
    std::cout<<"darshan destructor called"<<std::endl;

}

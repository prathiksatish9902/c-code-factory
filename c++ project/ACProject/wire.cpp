
#include "wire.h"

Wire::Wire() {
    std::cout<<"Wire constructor is called"<<std::endl;

    m_status = "off";
}

Wire::~Wire()
{
    std::cout<<"Wire destructor is called"<<std::endl;


}

void Wire::connect()
{
    std::cout<<"connect function is called"<<std::endl;

    m_status = "on";
}

void Wire::disconnect()
{
    std::cout<<"disconnect function is called"<<std::endl;

    m_status = "off";

}

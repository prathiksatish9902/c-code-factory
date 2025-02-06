
#include "acvents.h"

ACVents::ACVents() {
    std::cout<<"AC Vents constructor is called"<<std::endl;

    m_state = "off";
}

ACVents::~ACVents()
{
    std::cout<<"Ac vents destructor is called"<<std::endl;
}

void ACVents::powerON()
{
    std::cout<<"powerOn function is called"<<std::endl;
    m_state = "on";
}

void ACVents::powerOFF()
{
    std::cout<<"powerOFF function is called"<<std::endl;

    m_state = "off";
}

void ACVents::checkPower(Wire *wire)
{
    std::cout<<"checkPower function is called"<<std::endl;

    if(wire && wire->m_status == "on"){
        powerON();
    }
    else{
        powerOFF();
    }
}

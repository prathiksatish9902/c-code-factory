
#include <iostream>
#include "acvents.h"
#include "switch.h"
#include "wire.h"
using namespace std;

int main()
{
    Wire *wire=new Wire;
    Switch sw(wire);
    ACVents ac;
    std::cout<<"inital AC state: "<<ac.m_state<<std::endl;
    sw.turnON(ac);
    //ac.checkPower(wire);
    std::cout<<" AC state after connection: "<<ac.m_state<<std::endl;
    sw.turnOFF(ac);
    //ac.checkPower(wire);
    std::cout<<" AC state after disconnection: "<<ac.m_state<<std::endl;
    delete wire;
    std::cout<<"----------------------------------------------------------"<<std::endl;


    Wire *wire1=new Wire;
    Switch sw1(wire1);
    ACVents ac1;
    std::cout<<"inital AC state: "<<ac1.m_state<<std::endl;
    sw1.turnON(ac1);
    //ac1.checkPower(wire1);
    std::cout<<" AC state after connection: "<<ac1.m_state<<std::endl;
    sw1.turnOFF(ac1);
    //ac1.checkPower(wire1);
    std::cout<<" AC state after disconnection: "<<ac1.m_state<<std::endl;
    delete wire1;
    std::cout<<"----------------------------------------------------------"<<std::endl;

    return 0;
}

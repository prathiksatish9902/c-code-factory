#include "engine.h"

Engine::Engine(int cc, int piston) {
    std::cout<<"engine constructor called"<<std::endl;
    m_cc = cc;
    m_piston = piston;
}
 // Engine::Engine() {
 //     std::cout<<"engine default constructor called"<<std::endl;
 //     m_cc = 100;
 //     m_piston =3;
 // }

Engine::~Engine()
{
    std::cout<<"engine destructor called"<<std::endl;

}

void Engine::start()
{
    std::cout<<"start function called"<<std::endl;
    std::cout<<"cc:"<<m_cc<<std::endl;
    std::cout<<"piston:"<<m_piston<<std::endl;


}

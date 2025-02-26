#include "petrolengine.h"

PetrolEngine::PetrolEngine(int p_cc, int p_piston) : Engine(p_cc,p_piston){
    std::cout<<"petrol engine constructor called"<<std::endl;

}

PetrolEngine::~PetrolEngine()
{
    std::cout<<"petrol engine destructor called"<<std::endl;

}

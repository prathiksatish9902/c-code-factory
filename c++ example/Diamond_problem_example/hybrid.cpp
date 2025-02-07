#include "hybrid.h"

Hybrid::Hybrid(int h_cc, int h_piston) : Engine(h_cc,h_piston), PetrolEngine(h_cc,h_piston),CngEngine(h_cc,h_piston){
    std::cout<<"hybrid engine constructor called"<<std::endl;

}

Hybrid::~Hybrid()
{
    std::cout<<"hybrid engine destructor called"<<std::endl;

}

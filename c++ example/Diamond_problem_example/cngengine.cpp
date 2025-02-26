#include "cngengine.h"

CngEngine::CngEngine(int c_cc, int c_piston) : Engine(c_cc,c_piston){
    std::cout<<"cng engine constructor called"<<std::endl;

}

CngEngine::~CngEngine()
{
    std::cout<<"cng engine destructor called"<<std::endl;

}

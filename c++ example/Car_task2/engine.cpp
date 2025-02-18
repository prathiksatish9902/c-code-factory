#include "engine.h"

Engine::Engine() {
    std::cout<<"engine constructor called"<<std::endl;

}


Engine::~Engine()
{
    std::cout<<"engine destructor called"<<std::endl;

}



void Engine::engine_on()
{
    std::cout<<"engine on function called"<<std::endl;

}

void Engine::engine_off()
{
    std::cout<<"engine off function called"<<std::endl;

}


#include "engine.h"

Engine::Engine() {
    std::cout<<"engine constructor called"<<std::endl;
}

Engine::~Engine(){
    std::cout<<"engine destructor called"<<std::endl;

}


void Engine::Engine_On(){
    std::cout<<"engine on function called"<<std::endl;
    // c1 = c;
    c1->Key_Insert();
}

void Engine::Engine_Off(){
    std::cout<<"engine off function called"<<std::endl;
    // c1 = c;
    c1->Key_Remove();
}

#include "car.h"
#include "engine.h"
Car::Car() {
    std::cout<<"car constructor called"<<std::endl;
    m_keystatus = false;
    m_carstatus = false;
}

Car::~Car()
{
    std::cout<<"car destructor called"<<std::endl;

}

void Car::Key_Insert()
{
    std::cout<<"key insert function called"<<std::endl;
    m_keystatus = true;
}

void Car::Key_Remove(){
    std::cout<<"key remove function called"<<std::endl;
    m_keystatus = false;


}

void Car::Car_Move(Engine *e ,  Wheel *w){
    std::cout<<"car move function called"<<std::endl;
    e1 = e;
    w1 = w;

    e1->Engine_On();
    w1->Wheel_Move();
}


void Car::Car_Stop(Wheel *w, Engine *e){
    std::cout<<"car stop function called"<<std::endl;
    w1 = w;
    e1 = e;
    w1->Wheel_Stop();
    e1->Engine_Off();

}



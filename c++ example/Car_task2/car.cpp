#include "car.h"

Car::Car(bool key_state ) {
    std::cout<<"car constructor called"<<std::endl;
    m_key_state = key_state;
}


Car::~Car()
{
    std::cout<<"car destructor called"<<std::endl;

}

void Car::set_car(Engine *e)
{
    std::cout<<"set car function called"<<std::endl;
    m_e = e;

}

void Car::key_insert()
{
    std::cout<<"key insert function called"<<std::endl;
    m_e->engine_on();
}

void Car::key_remove()
{
    std::cout<<"key remove function called"<<std::endl;

    //m_e->engine_off();
}

void Car::car_move()
{
    std::cout<<"car move function called"<<std::endl;
}

void Car::car_stop()
{
    std::cout<<"car stop function called"<<std::endl;
    m_e->engine_off();
    this->key_remove();

}




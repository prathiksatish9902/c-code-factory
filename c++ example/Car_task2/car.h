#ifndef CAR_H
#define CAR_H
#include<iostream>
#include"engine.h"
class Car
{
    bool m_key_state;
    Engine *m_e;

public:
    Car(bool key_state);
    ~Car();
    void set_car(Engine *e);
    void key_insert();
    void key_remove();
    void car_move();
    void car_stop();

};

#endif // CAR_H

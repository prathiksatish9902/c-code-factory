#include <iostream>
#include"accelarator.h"
#include"brake.h"
#include"car.h"
#include"engine.h"
#include"wheel.h"
using namespace std;

int main()
{
    Engine e1;
    Car c1(true);
    c1.set_car(&e1);
    Wheel w1;
    w1.set_wheel(&c1);

    Brake b1;
    b1.set_brake(&w1,&c1);
    Accelarator a1;
    a1.set_accelarator(&w1,&c1);
    c1.key_insert();
    a1.accelarator_applied();
    b1.brake_applied();

    return 0;
}

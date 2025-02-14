#include <iostream>
#include"car.h"
using namespace std;

int main()
{
    Accelarator a1;
    Brake b1;
    Engine e1;
    Wheel w1;
    Car c1;
    c1.Key_Insert();
    a1.Accelarator_Applied(&w1);
    c1.Car_Move(&e1,&w1);
    b1.Brake_Applied(&w1);
    c1.Car_Stop(&w1,&e1);
    c1.Key_Remove();
    return 0;
}

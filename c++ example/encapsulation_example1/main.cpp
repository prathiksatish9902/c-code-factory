#include <iostream>
#include"car.h"
using namespace std;

int main()
{
    Car c1;
    c1.setwheel(4);
   // c1.getwheel();
    std::cout<<"wheel:"<<c1.getwheel()<<std::endl;
    return 0;
}

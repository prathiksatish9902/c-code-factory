#include <iostream>
#include"complex.h"
using namespace std;

int main()

{
    Complex obj1(20,30);
    Complex obj2(40,60);
    Complex obj4(10,10);
    Complex obj3 = obj1 + obj2;
    obj3.print();
    return 0;
}

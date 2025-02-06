#include <iostream>
#include"space.h"
using namespace std;

int main()
{
    Space s1(10,-20,30);
       Space s2(10,-20,30);
    s1.display();
    s2 =- s1;
    s2.display();
    return 0;
}

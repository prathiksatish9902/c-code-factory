#include <iostream>
#include "laptop.h"
using namespace std;

int main()
{
    Laptop company("hp",4);
    Laptop comp2("dell",8);
    company.details();
    comp2.details();
    return 0;
}

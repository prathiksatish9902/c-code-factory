#include <iostream>
#include "office.h"
#include "employee.h"

using namespace std;

int main()
{
    Office off;
    Employee e1("e1", &off);
    Employee e2("e2", &off);
    Employee e3("e3", &off);
    Employee e4("e4", &off);
    Employee e5("e5", &off);
    Employee e6("e6", &off);
    Employee e7("e7", &off);
    Employee e8("e8", &off);
    Employee e9("e9", &off);
    Employee e10("e10", &off);
    Employee e11("e11", &e1);
    Employee e12("e12", &e11);
    off.print();

    return 0;
}

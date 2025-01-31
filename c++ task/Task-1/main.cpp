#include <iostream>
#include "employee.h"
#include "organization.h"
using namespace std;

int main()
{
    Organization PthinkS(1,"Prathik",23,"1234567890","mail@prathik");
    Employee::m_display();
    return 0;
}

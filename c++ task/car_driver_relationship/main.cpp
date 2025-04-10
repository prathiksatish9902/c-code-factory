#include <iostream>
#include"car.h"
#include"driver.h"
#include"owner.h"
using namespace std;

int main()
{
    Driver *d1 = new Driver;
    Owner owner1;
    owner1.assignDriver(d1);
    delete d1;
    return 0;
}

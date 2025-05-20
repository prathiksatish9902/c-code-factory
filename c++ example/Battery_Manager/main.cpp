#include <iostream>
#include "battery_manager.h"
using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    Battery_Manager manager(100);
    manager.SimulateBattery();
    return 0;
}

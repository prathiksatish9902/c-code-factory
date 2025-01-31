#include <iostream>
#include"bike.h"
#include"car.h"
#include"hybridvehicle.h"
using namespace std;

int main()
{
    HybridVehicle camry(5.0f,"toyota","22/01/2025",4,"petrol");
    camry.Car::display();
    //camry.Vehicle::display();

    // HybridVehicle freedom(2,"bajaj","22/01/2025",2,"petrol");
    // freedom.Bike::display();
    //freedom.Vehicle::display();

    return 0;
}

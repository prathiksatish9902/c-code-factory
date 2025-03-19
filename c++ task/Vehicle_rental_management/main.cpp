#include <iostream>
#include"vehiclemanagement.h"
#include"vehicle.h"
#include"bike.h"
#include"car.h"
#include"bookingreport.h"
#include"fileoperation.h"
using namespace std;

std::string bikefilename = "bikefile.csv";
std::string carfilename = "carfile.csv";
std::string bookingfilename = "bookingfile.csv";
int main()
{

    VehicleManagement management;
    management.menu();
    return 0;
}

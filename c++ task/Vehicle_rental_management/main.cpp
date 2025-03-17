#include <iostream>
#include"vehiclemanagement.h"
using namespace std;

int main()
{
    std::string bikefilename = "bikefile.csv";
    std::string carfilename = "carfile.csv";
    std::string bookingfilename = "bookingfile.csv";

    VehicleManagement management;
    // management.addBike();
    // management.addCar();
    // management.addBookingData();
    management.GetBikeList();
    cout << "Hello World!" << endl;
    return 0;
}
https://claude.ai/chat/ca968fb2-0058-466f-9aab-d0cafe39bbbd

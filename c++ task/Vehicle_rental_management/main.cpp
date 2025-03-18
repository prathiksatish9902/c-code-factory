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

    int choice;
    while(1){
        std::cout<<"1.bike: "<<std::endl;
        std::cout<<"2.car: "<<std::endl;
        std::cout<<"3.booking details: "<<std::endl;
        std::cout<<"4.exit: "<<std::endl;

        std::cout<<"enter your choice: "<<std::endl;
        std::cin>>choice;

        switch(choice)
        {
        case 1:

            management.bikeOperations();
            break;

        case 2:

            management.carOperation();
            break;

        case 3:

            management.displayBookingData();
            break;

        case 4:
            exit(0);

        default:
            std::cout<<"invalid choice"<<std::endl;
            break;
        }
    }
    return 0;
}

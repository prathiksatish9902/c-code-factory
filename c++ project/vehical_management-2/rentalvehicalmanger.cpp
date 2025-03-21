#include "rentalvehicalmanger.h"

RentalVehicalManger::RentalVehicalManger() {
    std::cout<<"rental manager constructor called"<<std::endl;
    fileobject = new FileOperation;
    m_bikelist = fileobject->ReadBikeData("bikefile.csv");
    m_carlist = fileobject->ReadCarData("carfile.csv");
    m_bookinglist = fileobject->ReadBookingData("bookingfile.csv");
}

RentalVehicalManger::~RentalVehicalManger()
{
    std::cout<<"rental manager destructor called"<<std::endl;

}

void RentalVehicalManger::addBike()
{
    std::string bikeNumber , bikeName , bikeModelName , bikeStatus ;
    float bikeCost;

    std::cout<<"enter bike number :"<<std::endl;
    std::cin>>bikeNumber;

    std::cout<<"enter bike name :"<<std::endl;
    std::cin>>bikeName;

    std::cout<<"enter bike model name :"<<std::endl;
    std::cin>>bikeModelName;

    std::cout<<"enter bike status :"<<std::endl;
    std::cin>>bikeStatus;

    std::cout<<"enter bike rent cost :"<<std::endl;
    std::cin>>bikeCost;

    m_bikelist.push_back(new RentalBikeDetails(bikeNumber , bikeName , bikeModelName , bikeStatus , bikeCost));


}

void RentalVehicalManger::addCar()
{
    std::string carNumber , carName , carModelName , carStatus ;
    float carCost;

    std::cout<<"enter car number :"<<std::endl;
    std::cin>>carNumber;

    std::cout<<"enter car name :"<<std::endl;
    std::cin>>carName;

    std::cout<<"enter car model name :"<<std::endl;
    std::cin>>carModelName;

    std::cout<<"enter car status :"<<std::endl;
    std::cin>>carStatus;

    std::cout<<"enter car rent cost :"<<std::endl;
    std::cin>>carCost;

    m_carlist.push_back(new RentalCarDetails(carNumber , carName , carModelName , carStatus , carCost));
}

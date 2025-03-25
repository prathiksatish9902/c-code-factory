#ifndef RENTALVEHICALMANGER_H
#define RENTALVEHICALMANGER_H
#include<iostream>
#include<list>
#include"rentalbikedetails.h"
// #include"vehicalbookingreport.h"
#include"rentalcardetails.h"
// #include"fileoperation.h"
#include"onlinepayment.h"
#include"cashpayment.h"
using namespace  std;
// class FileOperation;
// class AdminManager;
class FileOperation;
class vehicalBookingReport;
class RentalVehicalManger
{
public:
    RentalVehicalManger();
    ~RentalVehicalManger();

    void addBike();
    void addCar();
    void addBookingData(std::string vehicalType , std::string VehicalNumber , std::string VehicalName , float vehicalRentCost , std::string amountStatus , std::string paymentMode);

    void deleteBike();
    void deleteCar();

    void displayBike();
    void displayCar();
    void displayBookingData();

    void updateBikeDetails();
    void updateCarDetails();

    void SearchBike();
    void SearchCar();

    void sortByBikeName();
    void sortByCarName();

    void sortByBikeStatus();
    void sortByCarStatus();

    void sortByBikePrice();
    void sortByCarPrice();

    void rentBike();
    void rentCar();

    void returnBike();
    void returnCar();

    void bikeDisplayMenu();
    void carDisplayMenu();

    void bikeManagement();
    void carManagement();

    void menu();




private:
    std::list<RentalBikeDetails*> m_bikelist;
    std::list<RentalCarDetails*> m_carlist;
    std::list<vehicalBookingReport*> m_bookinglist;
    std::list<User*> m_userlist;
    FileOperation *fileobject;
    PaymentMethod *payment;
    vehicalBookingReport *report;
};

#endif // RENTALVEHICALMANGER_H

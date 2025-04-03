#ifndef RENTALVEHICALMANGER_H
#define RENTALVEHICALMANGER_H
#include<iostream>
#include<list>
#include"rentalbikedetails.h"
#include"rentalcardetails.h"
#include"onlinepayment.h"
#include"cashpayment.h"
// #include<chrono>
using namespace  std;
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

    void displaySortedBike();
    void displayBikeData();
    void displayCar();
    void displayBookingData();

    void updateBikeDetails();
    void updateCarDetails();

    void SearchBike();
    void SearchCar();

    // void sortByBikeName();
    // std::list<RentalBikeDetails*> operator =(const std::list<RentalBikeDetails*> &bikelist);
        // std::list<RentalBikeDetails*> sortByBikeName(std::list<RentalBikeDetails*> &leftlist , std::list<RentalBikeDetails*> &rightlist);
    //-----------------------------------------------------------------------------
    // std::list<RentalBikeDetails *> sortByBikeName();

    // std::list<RentalBikeDetails*> mergeSort(std::list<RentalBikeDetails*>& bikes);
    // std::list<RentalBikeDetails*> merge(std::list<RentalBikeDetails*>& left, std::list<RentalBikeDetails*>& right);

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
    FileOperation *fileobject;
    PaymentMethod *payment;
    vehicalBookingReport *report;
};

#endif // RENTALVEHICALMANGER_H

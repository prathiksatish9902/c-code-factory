#ifndef RENTALVEHICALMANGER_H
#define RENTALVEHICALMANGER_H
#include"rentalvehicaldetails.h"
#include"rentalbikedetails.h"
#include"rentalcardetails.h"
#include"vehicalbookingreport.h"
#include"fileoperation.h"
#include"paymentmethod.h"
#include"cashpayment.h"
#include"onlinepayment.h"
#include<list>
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




private:
    std::list<RentalBikeDetails*> m_bikelist;
    std::list<RentalCarDetails*> m_carlist;
    std::list<vehicalBookingReport*> m_bookinglist;
    FileOperation *fileobject;
    PaymentMethod *payment;
    vehicalBookingReport *report;
};

#endif // RENTALVEHICALMANGER_H

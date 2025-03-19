#ifndef VEHICLEMANAGEMENT_H
#define VEHICLEMANAGEMENT_H
#include"vehicle.h"
#include"bike.h"
#include"car.h"
#include"bookingreport.h"
#include"fileoperation.h"
#include<list>
class VehicleManagement
{
public:
    VehicleManagement();

    ~VehicleManagement();

    void SetBikeList(std::list<Bike> bikelist);
    std::list<Bike> GetBikeList();

    void SetCarList(std::list<Car> carlist);
    std::list<Car> GetCarList();

    void SetBookingList(std::list<BookingReport> bookingreportlist);
    std::list<BookingReport> GetBookingList();

    void addBike();
    void addCar();

    void deleteBike(string &vehiclenumber);
    void deleteCar(std::string &vehiclenumber);

    void searchBike(std::string &vehiclename);
    void searchCar(std::string &vehiclename);
    // void searchBikeCustomer(std::string &customername);
    // void searchCarCustomer(std::string &customername);

    std::list<Bike> sortByBikeStatus();
    std::list<Car> sortByCarStatus();

    std::list<Bike> sortByBikePrice();
    std::list<Car> sortByCarPrice();

    std::list<Bike> sortByBikeName();
    std::list<Car> sortByCarName();


    void addBookingData(string vehicalName, string vehicalType, string vehicalnumber);

    void displayBike();
    void displayCar();
    void displayBookingData();

    void updateBikeDetails(string &vehiclenumber);
    void updateCarDetails(string &vehiclenumber);

    void rentBike(std::string &vehiclename );
    void rentCar(string &vehiclename );

    void returnBike(string &vehiclename );
    void returnCar(string &vehiclename);

    void bikeManagement();
    void carManagement();

    void bikeDisplayMenu();
    void carDisplayMenu();

    void menu();


private:
    std::list<Bike> m_bikelist;
    std::list<Car> m_carlist;
    std::list<BookingReport> m_bookingreportlist;
    FileOperation *fp;
};

#endif // VEHICLEMANAGEMENT_H

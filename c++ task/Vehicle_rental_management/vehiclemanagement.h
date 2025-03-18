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

    void addBookingData();

    void displayBike();
    void displayCar();
    void displayBookingData();

    void updateBikeDetails(string &vehiclenumber);
    void updateCarDetails(string &vehiclenumber);

    void rentBike(std::string &vehiclename );
    void rentCar(string &vehiclename );

    void returnBike(string &vehiclename );
    void returnCar(string &vehiclename);

    void bikeOperations();
    void carOperation();


private:
    std::list<Bike> m_bikelist;
    std::list<Car> m_carlist;
    std::list<BookingReport> m_bookingreportlist;
    FileOperation *fp;
    // Bike *bike;
    // Car *car;
};

#endif // VEHICLEMANAGEMENT_H

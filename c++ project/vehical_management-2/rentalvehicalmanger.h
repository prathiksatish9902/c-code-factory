#ifndef RENTALVEHICALMANGER_H
#define RENTALVEHICALMANGER_H
#include"rentalvehicaldetails.h"
#include"rentalbikedetails.h"
#include"rentalcardetails.h"
#include"vehicalbookingreport.h"
#include"fileoperation.h"
#include<list>
class RentalVehicalManger
{
public:
    RentalVehicalManger();
    ~RentalVehicalManger();

    void addBike();
    void addCar();



private:
    std::list<RentalBikeDetails*> m_bikelist;
    std::list<RentalCarDetails*> m_carlist;
    std::list<vehicalBookingReport*> m_bookinglist;
    FileOperation *fileobject;
};

#endif // RENTALVEHICALMANGER_H

#ifndef FILEOPERATION_H
#define FILEOPERATION_H
#include<ostream>
#include<fstream>
#include<sstream>
#include<iostream>
#include<functional>
#include"vehicle.h"
#include"bike.h"
#include"car.h"
#include"bookingreport.h"
#include<list>
using namespace std;
class FileOperation
{
public:
    FileOperation();
    ~FileOperation();

    std::list<Bike> ReadBikeData(const std::string &bikefilename);
    std::list<Car> ReadCarData(const std::string &carfilename);
    std::list<BookingReport> ReadBookingData(const std::string &bookingfilename);

    void WriteBikeData(std::list<Bike> bikelist);
    void WrieCarData(std::list<Car> carlist);
    void WriteBookingData(std::list<BookingReport> bookinglist);
};

#endif // FILEOPERATION_H

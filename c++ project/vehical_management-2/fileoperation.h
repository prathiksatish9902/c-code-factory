#ifndef FILEOPERATION_H
#define FILEOPERATION_H
#include<ostream>
#include<fstream>
#include<sstream>
#include<iostream>
#include<functional>
#include"rentalvehicaldetails.h"
#include"rentalbikedetails.h"
#include"rentalcardetails.h"
#include"vehicalbookingreport.h"
#include<list>
using namespace std;
class FileOperation
{
public:
    FileOperation();
    ~FileOperation();

    std::list<RentalBikeDetails*> ReadBikeData(const std::string &bikefile);
    std::list<RentalCarDetails*> ReadCarData(const std::string &carfile);
    std::list<vehicalBookingReport*> ReadBookingData(const std::string &bookingreportfile);

    void WriteBikeData(std::list<RentalBikeDetails*> bikelist);
    void WriteCarData(std::list<RentalCarDetails*> carlist);
    void WriteBookingData(std::list<vehicalBookingReport*> bookinglist);

private:
    RentalVehicalDetails *m_rentalVehical;


};

#endif // FILEOPERATION_H

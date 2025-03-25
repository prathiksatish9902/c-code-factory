#ifndef FILEOPERATION_H
#define FILEOPERATION_H
#include<ostream>
#include<fstream>
#include<sstream>
#include<iostream>
#include<functional>
#pragma once
// // #include"rentalvehicaldetails.h"
// // #include"rentalbikedetails.h"
// // #include"rentalcardetails.h"
// #include"vehicalbookingreport.h"
// // #include"admin.h"
// #include"adminmanager.h"
// // #include"user.h"
// #include"usermanager.h"
#include<list>
using namespace std;
#include"rentalvehicalmanger.h"
class RentalVehicalManger;
#include"user.h"
#include"admin.h"
class AdminManager;
class vehicalBookingReport;
class FileOperation
{
public:
    FileOperation();
    ~FileOperation();

    std::list<RentalBikeDetails*> ReadBikeData(const std::string &bikefile);
    std::list<RentalCarDetails*> ReadCarData(const std::string &carfile);
    std::list<vehicalBookingReport*> ReadBookingData(const std::string &bookingreportfile);
    std::list<Admin*> ReadAdminData(const std::string &adminfile);
    std::list<User*> ReadUserData(const std::string &userfile);

    void WriteBikeData(std::list<RentalBikeDetails*> bikelist);
    void WriteCarData(std::list<RentalCarDetails*> carlist);
    void WriteBookingData(std::list<vehicalBookingReport*> bookinglist);
    void WriteAdminData(std::list<Admin*> adminlist);
    void WriteUserData(std::list<User*> userlist);

private:
    RentalVehicalDetails *m_rentalVehical;


};

#endif // FILEOPERATION_H

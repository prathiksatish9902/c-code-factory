#ifndef USERMANAGER_H
#define USERMANAGER_H
#include <list>
#include<iostream>
#include"user.h"
#include"fileoperation.h"
class UserManager
{
public:
    UserManager();
    ~UserManager();

    void addUser();
    void userLogin();
private:
    std::list<User*> m_userList;
    std::list<RentalBikeDetails*> m_bikelist;
    std::list<RentalCarDetails*> m_carlist;
    std::list<vehicalBookingReport*> m_bookinglist;
    FileOperation *fileobject;
    RentalVehicalManger *manager;


};

#endif // USERMANAGER_H

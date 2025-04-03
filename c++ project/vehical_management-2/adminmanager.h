#ifndef ADMINMANAGER_H
#define ADMINMANAGER_H
#include<list>
#include<iostream>
#include"admin.h"

class RentalVehicalManger;
class FileOperation;
class AdminManager
{
public:
    AdminManager();
    ~AdminManager();

    void addAdmin();
    void AdminLogin();

private:
    std::list<Admin*> m_adminList;
    FileOperation *fileobject;
    RentalVehicalManger *manager;
};

#endif // ADMINMANAGER_H

#ifndef STAFF_H
#define STAFF_H
#include<iostream>
class Staff
{

public:
    int id;
    std::string name;
    std::string department;
    Staff(int id,std::string name,std::string department);
    ~Staff();


};

#endif // STAFF_H

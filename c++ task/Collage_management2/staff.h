#ifndef STAFF_H
#define STAFF_H

#include "person.h"
#include <string>
using namespace std;


class Staff:public Person
{
public:
    Staff();
    Staff(int ID,string name,string dept);

    int getID();
    string getName();
    string getDepartment();

    void setStaffDetails(string name,string department);

    ~Staff();

};
#endif // STAFF_H

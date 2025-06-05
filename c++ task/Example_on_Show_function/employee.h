#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <iostream>
#include "baseobject.h"

class Office;

class Employee : public BaseObject
{
public:
    Employee(const std::string name, Office* office);
    Employee(const std::string name, Employee* emp);
    Employee();
    ~Employee();

    void print() override;

    void getme();
};

#endif // EMPLOYEE_H

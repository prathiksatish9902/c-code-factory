#ifndef OFFICE_H
#define OFFICE_H

#include <string>
#include <iostream>
#include "baseobject.h"

class Employee;

class Office : public BaseObject
{
public:
    Office(const std::string name);
    Office();
    ~Office();
    void addEmployee(Employee* emp);
    void print() override;

    void getme();
};

#endif // OFFICE_H

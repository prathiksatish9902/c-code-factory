#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include <iostream>
#include <vector>

class Office;

class Employee
{
public:
    Employee(const std::string& name, Office* office);
    Employee(const std::string& name, Employee* emp);
    ~Employee();

    std::string GetName() const;
    void print();
    void printChildren();
    void addChild(Employee* child);
private:
    std::string name;
    Office* officePtr;
    Employee* empPtr;
    std::vector<Employee*> children;
};

#endif // EMPLOYEE_H

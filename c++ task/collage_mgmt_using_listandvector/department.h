#ifndef DEPARTMENT_H
#define DEPARTMENT_H
#include<iostream>
class Department
{

public:
    Department(std::string departmentName);
    ~Department();
    void setDepartment(Department &departmentName);
    std::string getDepartment();
};

#endif // DEPARTMENT_H

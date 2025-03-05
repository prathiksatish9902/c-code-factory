#ifndef DEPARTMENT_H
#define DEPARTMENT_H
#include<iostream>
#include<vector>
#include"staff.h"
class Department
{
public:
    Department();
    ~Department();

    void SetdepartmentName(std::string departmentName);
    std::string GetdepartmentName();
    void SetStaffDEpartment(Staff &staff);
private:
    std::string m_departmentName;
    std::vector<Staff> staffMembers;

};

#endif // DEPARTMENT_H

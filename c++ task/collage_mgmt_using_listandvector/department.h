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

    std::string departmentName() const;
    void setDepartmentName(const std::string &newDepartmentName);

private:
    std::string m_departmentName;
};

#endif // DEPARTMENT_H

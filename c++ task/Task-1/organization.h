#ifndef ORGANIZATION_H
#define ORGANIZATION_H
#include "employee.h"
class Organization
{
public:
    Organization(int id,std::string name,int age,std::string phone,std::string mail);
    ~Organization();
};

#endif // ORGANIZATION_H

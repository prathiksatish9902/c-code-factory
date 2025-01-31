#ifndef LAPTOP_H
#define LAPTOP_H
#include <string>
class Laptop
{
public:
    Laptop(std::string m_brand,int m_ram);
    std::string m_brand;
    int m_ram;
    void details();

};

#endif // LAPTOP_H

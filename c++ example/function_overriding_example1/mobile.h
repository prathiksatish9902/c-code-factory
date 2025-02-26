#ifndef MOBILE_H
#define MOBILE_H
#include"electronicitem.h"
class Mobile : public ElectronicItem
{

    std::string m_mobileName;
public:
    Mobile(std::string mobileName);
    Mobile();
    ~Mobile();
    int getPrice();
    void setPrice(float itemPrice);
    void display();
};

#endif // MOBILE_H

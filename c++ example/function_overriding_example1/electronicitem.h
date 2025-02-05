#ifndef ELECTRONICITEM_H
#define ELECTRONICITEM_H
#include<iostream>
class ElectronicItem
{
    std::string m_itemName;

protected:
    float m_itemPrice;
public:
    ElectronicItem(std::string itemName);
    ElectronicItem();
    ~ElectronicItem();
    int getPrice();
    virtual void setPrice(float itemPrice);
    virtual void display();

};

#endif // ELECTRONICITEM_H

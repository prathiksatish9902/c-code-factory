#include "electronicitem.h"

ElectronicItem::ElectronicItem(std::string itemName) {
    std::cout<<"electronic item constructor called"<<std::endl;
    m_itemName = itemName;

}

ElectronicItem::ElectronicItem()
{
    std::cout<<"empty constructor called"<<std::endl;

}

ElectronicItem::~ElectronicItem()
{
    std::cout<<"electronic item destructor called"<<std::endl;

}

int ElectronicItem::getPrice()
{
    std::cout<<"getprice function called"<<std::endl;
    return m_itemPrice;
}

void ElectronicItem::setPrice(float itemPrice)
{
    std::cout<<"setprice function called"<<std::endl;
    m_itemPrice = itemPrice;

}

void ElectronicItem::display()
{
    std::cout<<"base class display called"<<std::endl;
    std::cout<<"item name :"<<m_itemName<<std::endl;
    std::cout<<"item price :"<<m_itemPrice<<std::endl;

}

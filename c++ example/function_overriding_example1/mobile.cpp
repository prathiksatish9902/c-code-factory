#include "mobile.h"

Mobile::Mobile(std::string  mobileName): ElectronicItem(mobileName) {
    std::cout<<"mobile constructor called"<<std::endl;
    m_mobileName = mobileName;
}

Mobile::Mobile()
{
    std::cout<<"empty constructor called"<<std::endl;
}

Mobile::~Mobile()
{
    std::cout<<"mobile destructor called"<<std::endl;

}

int Mobile::getPrice()
{
    std::cout<<"mobile get price function called"<<std::endl;
    return m_itemPrice;

}

void Mobile::setPrice(float itemPrice)
{
    std::cout<<"mobile set price function called"<<std::endl;
    ElectronicItem:: m_itemPrice = itemPrice;

}

void Mobile::display()
{
    std::cout<<"mobile display function called"<<std::endl;
    std::cout<<"mobile name:"<<m_mobileName<<std::endl;
    std::cout<<"mobile price:"<<m_itemPrice<<std::endl;



}

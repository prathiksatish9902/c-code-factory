#include "laptop.h"
#include <iostream>
Laptop::Laptop(std::string brand,int ram) {
    m_brand=brand;
    m_ram = ram;
}

void Laptop::details(){
    std::cout<<m_brand<<std::endl;
    std::cout<<m_ram<<std::endl;
}


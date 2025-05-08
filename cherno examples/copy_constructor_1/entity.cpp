#include "entity.h"
#include <iostream>

Entity::Entity(int num)
{
    m_Num = new int(num);
    std::cout << "Entity Constructor Called" << std::endl;
}

Entity::Entity(const Entity& E3)
{
    std::cout<<"11111"<<*E3.m_Num<<std::endl;
    m_Num = new int(*E3.m_Num);
    std::cout<<"222222"<<m_Num<<std::endl;
    std::cout << "Entity Copy Constructor Called " << std::endl;
}

Entity::~Entity()
{
    std::cout << "Entity Destructor Called" << std::endl;
    delete m_Num;
}

void Entity::printFunction()
{
    std::cout << "Value = " << *m_Num << ", Address = " << m_Num << std::endl;
}

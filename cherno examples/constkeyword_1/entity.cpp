#include "entity.h"

Entity::Entity() {}

int Entity::Getx() const
{
    return m_x;
}

void Entity::Setx(int x)
{
    m_x = x;
}

void Entity::printEntity(Entity &e)
{
    std::cout<<e.Getx()<<std::endl;
}

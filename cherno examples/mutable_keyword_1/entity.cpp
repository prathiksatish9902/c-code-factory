#include "entity.h"

Entity::Entity() {}

const std::string &Entity::getName() const
{
    count++;
    return m_name;
}

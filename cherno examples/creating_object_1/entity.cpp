#include "entity.h"

Entity::Entity():m_name("unknown") {}

Entity::Entity(const std::string &name) : m_name(name)
{

}

const std::string &Entity::GetName() const
{
    return m_name;
}

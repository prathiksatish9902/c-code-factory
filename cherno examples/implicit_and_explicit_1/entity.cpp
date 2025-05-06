#include "entity.h"

Entity::Entity(const std::string &name):m_Name(name),m_Age(-1) {}

Entity::Entity(int age):m_Name("unknown"),m_Age(age)
{

}

#include "entity.h"

Entity::Entity(): m_name("unknown"),m_example(Example(8)) {
    std::cout<<m_name<<std::endl;
    // m_example = Example(8);
}

Entity::Entity(const std::string &name):m_name(name)
{
    std::cout<<m_name<<std::endl;

}

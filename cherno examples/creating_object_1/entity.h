#ifndef ENTITY_H
#define ENTITY_H
#include <iostream>
class Entity
{
private:
    std::string m_name;
public:
    Entity();
    Entity(const std::string& name);
    const std::string &GetName() const;
};

#endif // ENTITY_H

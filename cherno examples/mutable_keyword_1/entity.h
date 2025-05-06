#ifndef ENTITY_H
#define ENTITY_H
#include<iostream>
class Entity
{
private:
    std::string m_name;
    mutable int count = 0;
public:
    Entity();
    const std::string& getName()const;
};

#endif // ENTITY_H

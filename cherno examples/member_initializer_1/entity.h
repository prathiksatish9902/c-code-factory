#ifndef ENTITY_H
#define ENTITY_H
#include<iostream>
#include "example.h"
class Entity
{
private:
    std::string m_name;
    Example m_example;
public:
    Entity();
    Entity(const std::string &name);
};

#endif // ENTITY_H

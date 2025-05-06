#ifndef ENTITY_H
#define ENTITY_H
#include <iostream>
class Entity
{
private:
    std::string m_Name;
    int m_Age;
public:
    Entity(const std::string& name);
    explicit Entity(int age);
};

#endif // ENTITY_H

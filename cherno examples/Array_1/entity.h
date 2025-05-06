#ifndef ENTITY_H
#define ENTITY_H
#include<iostream>
#include<array>
class Entity
{
public:
    int *example = new int[5];
    std::array<int , 5> another;
    Entity();
};

#endif // ENTITY_H

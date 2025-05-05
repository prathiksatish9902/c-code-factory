#ifndef ENTITY_H
#define ENTITY_H
#include<iostream>
#include"printable.h"
class Entity: public Printable
{
public:
    Entity();
   virtual std::string GetName() = 0;
    std::string GetClassName();
};

#endif // ENTITY_H

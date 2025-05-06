#ifndef ENTITY_H
#define ENTITY_H
#include<iostream>
class Entity
{
private:
    int m_x , m_y;
public:
    Entity();
    int Getx()const;
    void Setx(int x);
    void printEntity(Entity &e);
};

#endif // ENTITY_H

#ifndef ENTITY_H
#define ENTITY_H

class Entity
{
private:
    int* m_Num;

public:
    Entity(int num);
    Entity(const Entity& E3);
    ~Entity();

    void printFunction();
};

#endif // ENTITY_H

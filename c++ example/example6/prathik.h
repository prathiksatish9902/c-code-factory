#ifndef PRATHIK_H
#define PRATHIK_H
#include<iostream>
class PRATHIK
{
    int m_age;

public:
    float m_weight;
    float m_height;
    PRATHIK();
    PRATHIK(int age,float weight,float height,std::string bloodgroup);
    void display();

protected:
    std::string m_bloodGroup;

};

#endif // PRATHIK_H

#ifndef SPACE_H
#define SPACE_H
#include<iostream>
class Space
{
    int m_a;
    int m_b;
    int m_c;
public:
    Space(int a, int b, int c);
    Space();
    ~Space();
    Space operator-();
    void display();
};

#endif // SPACE_H

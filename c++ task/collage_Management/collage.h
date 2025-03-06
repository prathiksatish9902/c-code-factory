#ifndef COLLAGE_H
#define COLLAGE_H
#include<iostream>
#include"management.h"
#include<list>
#include<vector>
class Collage
{
public:
    Management *m_management;
    Collage();
    ~Collage();
private:
    std::list<Student> m_studentlist;
    std::vector<Staff> m_staffvector;
};

#endif // COLLAGE_H

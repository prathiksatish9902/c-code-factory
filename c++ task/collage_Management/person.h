#ifndef PERSON_H
#define PERSON_H
#include<iostream>
class Person
{
public:
    Person();
    ~Person();
protected:
    int m_id;
    std::string m_name;
    std::string m_department;
};

#endif // PERSON_H

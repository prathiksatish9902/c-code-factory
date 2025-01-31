
#ifndef PERSON_H
#define PERSON_H
#include<iostream>
class Person
{
public:
    std::string m_name;
    std::string m_phnum;
    Person(std::string name, std::string phnum /*int age*/);
    Person();
    ~Person();
    void display();
// protected:
//     int m_age;
};

#endif // PERSON_H

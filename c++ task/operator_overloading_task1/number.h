#ifndef NUMBER_H
#define NUMBER_H
#include<iostream>
class Number
{
    int m_num;
    std::string name;
public:
    Number(int num);
    Number();
    ~Number();
    void setNum(int num);
    int getNum();
};

#endif // NUMBER_H

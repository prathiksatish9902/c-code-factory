#ifndef ARRAY_H
#define ARRAY_H
#include<iostream>
template <typename T ,int n>
class Array
{
private:
    T m_array[n];
public:
    Array();
    int getSize();
};

#endif // ARRAY_H

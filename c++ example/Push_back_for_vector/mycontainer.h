#ifndef MYCONTAINER_H
#define MYCONTAINER_H
#include<iostream>
#include<string>
template<typename T>
class MyContainer
{
public:
    MyContainer(int size , int capacity);
    ~MyContainer();
    void PushBack(T value);
    void Display();
    void Resize();

private:

    T *m_array;
    int m_size;
    T m_capacity;

};

#endif // MYCONTAINER_H

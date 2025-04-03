#include "mycontainer.h"

template<typename T>
MyContainer <T>::MyContainer(int size, int capacity)
{
    std::cout<<"parameter constructor called"<<std::endl;
    m_size = size;
    m_size = 0;
    // m_capacity = 1;
    m_capacity = capacity;
    m_array = new T[capacity];
}
template<typename T>
MyContainer <T>::~MyContainer()
{
    std::cout<<"destructor called"<<std::endl;
    delete m_array;

}
template<typename T>
void MyContainer <T>::PushBack(T value)
{
    std::cout<<"push back function called"<<std::endl;
    if(m_size == m_capacity)
    {
        Resize();
    }
    m_array[m_size] = value;
    m_size++;
}
template<typename T>
void MyContainer <T> ::Display()
{
    std::cout<<"display function called"<<std::endl;
    for(int i = 0; i < m_size; i++)
    {
        std::cout<<m_array[i]<<std::endl;
    }

}
template<typename T>
void MyContainer <T> :: Resize()
{
    std::cout<<"resize function called"<<std::endl;
    m_capacity = m_capacity * 2;
    T *newArray = new T;
    for(int i = 0 ; i < m_size; i++)
    {
        newArray = m_array;
    }
    delete m_array;
    m_array = newArray;
}


template class MyContainer<int>;
template class MyContainer<float>;
template class MyContainer<double>;
// template class MyContainer<std::string>;

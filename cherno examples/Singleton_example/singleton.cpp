#include "singleton.h"

// Singleton &Singleton::getInstance()
// {
//     static Singleton s;
//     return s;
// }

// void Singleton::add(int i)
// {
// m_vector.push_back(i);
// }

// int Singleton::get(int i) const
// {
//     return m_vector[i];
// }

// int Singleton::size() const
// {
//     return m_vector.size();
// }

// Singleton::Singleton() {}

Singleton::Singleton()
{

}

Singleton *Singleton::getInstance()
{
    if (m_sptr == nullptr)
        m_sptr = new Singleton();
    return m_sptr;
}

void Singleton::add(int i)
{
    m_vector.push_back(i);

}

int Singleton::get(int i) const
{
        return m_vector[i];

}

int Singleton::size() const
{
    return m_vector.size();

}

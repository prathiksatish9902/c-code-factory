#include <iostream>
#include "singleton.h"
using namespace std;
Singleton* Singleton::m_sptr = nullptr;
int main()
{
    // Singleton &s = Singleton::getInstance();

    // s.add(5);
    // s.add(6);
    // s.add(7);
    // std::cout<<s.size()<<std::endl;
    // std::cout<<s.get(2)<<std::endl;


    // Singleton &t = Singleton::getInstance();
    // std::cout<<t.size()<<std::endl;
    // std::cout<<t.get(2)<<std::endl;

    // Singleton &u = s;
    // std::cout<<u.size()<<std::endl;


    Singleton *p = Singleton::getInstance();
    p->add(5);
    p->add(6);
    p->add(7);
    std::cout<<p->size()<<std::endl;

    Singleton *q = Singleton::getInstance();
    std::cout<<p<<","<<q<<std::endl;
    std::cout<<q->size()<<std::endl;

    return 0;
}

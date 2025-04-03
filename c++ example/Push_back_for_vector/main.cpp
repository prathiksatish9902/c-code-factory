#include <iostream>
#include "mycontainer.h"
using namespace std;

int main()
{
    MyContainer<int> container1(0 , 3);
    MyContainer<float> container2(0 , 3);
    MyContainer<double> container3(0 , 3);
    // MyContainer<std::string> container4(0 , 3);

    // MyContainer container;

    container1.PushBack(10);
    container1.PushBack(20);
    container1.PushBack(30);
    container1.Display();
    std::cout<<"________________________________________________________________"<<std::endl;
    container2.PushBack(2.4f);
    container2.PushBack(5.4f);
    container2.PushBack(7.4f);
    container2.Display();
    std::cout<<"________________________________________________________________"<<std::endl;
    container3.PushBack(3.987654323456);
    container3.PushBack(5.987654323456);
    container3.PushBack(6.987654323456);
    container3.Display();
    // std::cout<<"________________________________________________________________"<<std::endl;
    // container4.PushBack("abc");
    // container4.PushBack("def");
    // container4.PushBack("xyz");
    // container4.Display();

    return 0;
}

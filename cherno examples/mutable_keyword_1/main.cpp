#include <iostream>
#include<entity.h>
using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    Entity e;
    e.getName();

    int x = 8;
    auto f = [=]() mutable
    {
        x++;
        std::cout<<x<<std::endl;
    };
    f();
    return 0;
}

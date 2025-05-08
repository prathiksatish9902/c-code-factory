#include <iostream>
#include "array.h"
using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    Array<int , 5> a;
    std::cout<<a.getSize()<<std::endl;
    return 0;
}

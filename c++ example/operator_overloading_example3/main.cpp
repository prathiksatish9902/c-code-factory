#include <iostream>
#include"a.h"
#include"b.h"
using namespace std;

int main()
{
    A a(10,20);
    A b(10,20);
    A a3 = a + b;
    B abc(30,40);
    B def(40,50);
    B mno = abc +def;

    return 0;
}

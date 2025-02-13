#include <iostream>
#include"ac.h"
#include"switch.h"
#include"wire.h"
using namespace std;

int main()
{
    AC ac1;
    Switch s1;
    Wire w1;
    s1.Setwire(&w1);
    ac1.Setwire(&w1);
    s1.S_on();
    return 0;
}

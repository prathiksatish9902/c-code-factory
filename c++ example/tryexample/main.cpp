#include <iostream>
#include"a.h"
#include"b.h"
#include"c.h"
using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    A *ptr = new C;
    delete ptr;
    return 0;
}

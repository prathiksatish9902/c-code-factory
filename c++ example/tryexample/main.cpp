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
    // C c1;
    // c1.print();
    return 0;
}

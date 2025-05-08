#include <iostream>
#include "entity.h"

using namespace std;

int main()
{
    // Entity e1(10);        /// Calls constructor
    // Entity e2 = e1;       /// Calls deep copy constructor

    // e1.printFunction();
    // e2.printFunction();


    Entity* e3 = new Entity(20);
    Entity* shallow = e3;   /// Shallow copy
    shallow->printFunction();
    delete e3;
    //shallow->printFunction();   /// e3 is deleted now shallow points to freed memory

    return 0;
}

#include <iostream>
#include "entity.h"
using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    // Entity e;
    // Entity e = Entity("prathik");
    Entity *e = new Entity;
    std::cout<<e->GetName()<<std::endl;
    return 0;
}

#include <iostream>
#include "entity.h"
using namespace std;

void PrintEntity(const Entity &entity){

}

int main()
{
    PrintEntity(Entity(22));
    PrintEntity(Entity("prathik"));
    cout << "Hello World!" << endl;
    Entity a("prathik");
    Entity b(Entity(22));
    return 0;
}

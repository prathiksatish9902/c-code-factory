#include <iostream>
#include"player.h"
using namespace std;
void Print(Printable *obj){
    std::cout<<obj->GetClassName()<<std::endl;
}

int main()
{
    cout << "Hello World!" << endl;
    Entity *e = new Player("cherno");
    std::cout<<e->GetName()<<std::endl;

    Player *p = new Player("prathik");
    std::cout<<p->GetName()<<std::endl;

    Entity *e1 = p;
    std::cout<<e1->GetName()<<std::endl;

    Print(e);
    Print(p);
    Print(e1);

    return 0;
}

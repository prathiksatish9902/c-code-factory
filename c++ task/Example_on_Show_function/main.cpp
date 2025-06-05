#include <iostream>
#include "office.h"
#include "employee.h"
using namespace std;

int main()
{
    Office off("PthinkS");
    Employee prathik("prathik", &off);
    Employee darshan("darshan", &off);
    Employee girish("girish", &off);
    Employee anurag("anurag", &off);
    Employee dhimanth("dhimanth", &off);
    Employee hruthik("hruthik", &off);
    Employee shashank("shashank", &off);
    Employee suhas("suhas", &off);
    Employee ranganath("ranganath", &off);
    Employee harsha("harsha", &off);
    Employee shankar("shankar", &prathik);
    Employee amith("amith", &shankar);
    off.print();
    off.getme();
    prathik.getme();
    off.findChild("PthinkS");
    return 0;
}

#include <iostream>
#include"wire.h"
#include"finolexwire.h"
#include"havellswire.h"
#include"polycabwire.h"
using namespace std;

int main()
{
    Wire *p;
    int choice;
    while(1){
        std::cout<<"1.Wire"<<std::endl;
        std::cout<<"2.finolex"<<std::endl;
        std::cout<<"3.havells"<<std::endl;
        std::cout<<"4.polycab"<<std::endl;
        std::cout<<"enter choice"<<std::endl;
        std::cin>>choice;


    switch(choice){
    case 1:
        p = new Wire;
        delete p;
        break;
    case 2:
        p = new FinolexWire;
        delete p;
        break;
    case 3:
        p = new HavellsWire;
        delete p;

        break;
    case 4:
        p = new PolycabWire;
        delete p;
        break;

    default:
        std::cout<<"invalid choice"<<std::endl;

    }

    return 0;
    }
}

#include <iostream>
#include"ac.h"
#include"switch.h"
#include"wire.h"
#include"polycabwire.h"
#include"finolexwire.h"
#include"havellswire.h"
using namespace std;
enum wire{
    polycabWire = 1,
    finolexWire,
    havellsWire
};

int main()
{
    Wire *w1;
    int choice;
    while(1){
        std::cout<<"1.polycab"<<std::endl;
        std::cout<<"2.finolex"<<std::endl;
        std::cout<<"3.havells"<<std::endl;
        std::cout<<"enter the choice : "<<std::endl;
        std::cin>>choice;

    switch(choice){
    case polycabWire:
    {

        w1 = new PolycabWire;
        break;
    }
    case finolexWire:
    {

        w1 = new FinolexWire;
        break;
    }
    case havellsWire:
    {

        w1 = new HavellsWire;
        break;
    }
    default:
    {
        std::cout<<"invalid choice"<<std::endl;
        exit(0);
    }

    }

    AC ac1;
    Switch s1;
    s1.Setwire(w1);
    ac1.Setwire(w1);
    s1.Switch_on();
    //delete w1;
    return 0;
}
}

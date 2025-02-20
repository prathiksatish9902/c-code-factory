#include <iostream>
#include"ac.h"
#include"switch.h"
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
            AC ac1;
            Switch s1;
            PolycabWire pw1;
            s1.SetPolycabWire(&pw1);
            ac1.SetPolycabWire(&pw1);
            s1.P_Switch_on();
            break;
        }
        case finolexWire:
        {
            AC ac1;
            Switch s1;
            FinolexWire fw1;
            s1.SetFinolexWire(&fw1);
            ac1.SetFinolexWire(&fw1);
            s1.F_Switch_on();
            break;
        }
        case havellsWire:
        {

            AC ac1;
            Switch s1;
            HavellsWire hw1;
            s1.SetHavellsWire(&hw1);
            ac1.SetHavellsWire(&hw1);
            s1.H_Switch_on();
            break;
        }
        default:
        {
            std::cout<<"invalid choice"<<std::endl;
            exit(0);
        }

        }
        return 0;
    }
}

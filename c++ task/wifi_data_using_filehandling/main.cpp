#include <iostream>
#include "wifi.h"
#include"wifimanager.h"
using namespace std;

enum{
    // read = 1,
    display = 1,
    connect,
    Exit
};

int main()
{
    WifiManager wifiobj;

    int choice;
    while(1){

        std::cout<<"1.display data"<<std::endl;
        std::cout<<"2.connect other wifi "<<std::endl;

        std::cout<<"3.exit"<<std::endl;

        std::cout<<"enter choice :"<<std::endl;
        std::cin>>choice;

        switch(choice){



        case display:

            wifiobj.display();
            // std::cout<<"-----------------------------------------------------------------------------------------------"<<std::endl;

            break;
        case connect:
            wifiobj.ConnectWifi();
            break;

        case Exit:
            return 0;

        default:
            std::cout<<"invalid choice"<<std::endl;
            exit(0);
        }
    }

    return 0;
}

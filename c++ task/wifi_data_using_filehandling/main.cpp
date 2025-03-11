#include <iostream>
#include "readdatafromfile.h"
#include "wifi.h"
using namespace std;

enum{
    read = 1,
    display,
    Exit
};

int main()
{
    ReadDataFromFile fp;
    Wifi wifiobj;
    int choice;
    while(1){
        std::string fileName = "wifiData.csv";

        std::cout<<"1.read data"<<std::endl;
        std::cout<<"2.display data"<<std::endl;
        std::cout<<"3.exit"<<std::endl;

        std::cout<<"enter choice :"<<std::endl;
        std::cin>>choice;

        switch(choice){

        case read:
            wifiobj.m_wifilist = fp.readData(fileName);
            std::cout << "Data read successfully!" << std::endl;
            break;

        case display:
            if (wifiobj.m_wifilist.empty()) {
                wifiobj.m_wifilist = fp.readData(fileName);
            }
            // Sort the wifi list before displaying
            // wifiobj.sortWifiList();
             wifiobj.display();
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

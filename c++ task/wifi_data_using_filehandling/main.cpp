#include <iostream>
#include "readdatafromfile.h"
#include "wifi.h"
using namespace std;

enum{
    // read = 1,
    display = 1,
    Exit
};

int main()
{
    ReadDataFromFile fp;
    Wifi wifiobj;
    int choice;
    while(1){
        std::string fileName = "wifiData.csv";

        // std::cout<<"1.read data"<<std::endl;
        std::cout<<"1.display data"<<std::endl;
        std::cout<<"2.exit"<<std::endl;

        std::cout<<"enter choice :"<<std::endl;
        std::cin>>choice;

        switch(choice){

                // case read:
                //     wifiobj.m_wifilist = fp.readData(fileName);
                //     std::cout << "Data read successfully!" << std::endl;
                //     break;

        case display:
            // if (wifiobj.m_wifilist.empty()) {
            //     wifiobj.m_wifilist = fp.readData(fileName);
            // }
            // Sort the wifi list before displaying
            // wifiobj.sortWifiList();
            wifiobj.m_wifilist = fp.readData(fileName);
            std::cout<<"-----------------------------------------------------------------------------------------------"<<std::endl;
            std::cout << "Data read successfully!" << std::endl;
            wifiobj.sort(wifiobj.m_wifilist);
            std::cout<<"-----------------------------------------------------------------------------------------------"<<std::endl;

            wifiobj.display();
            std::cout<<"-----------------------------------------------------------------------------------------------"<<std::endl;

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

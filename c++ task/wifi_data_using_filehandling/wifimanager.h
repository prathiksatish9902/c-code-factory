#ifndef WIFIMANAGER_H
#define WIFIMANAGER_H
#include"wifi.h"
#include "readdatafromfile.h"
#include<list>
#include<fstream>
class WifiManager
{
public:
    WifiManager();
    ~WifiManager();
    void display();
    void ConnectWifi();
    std::list<Wifi> sort();

    void setWifiList(std::list<Wifi> wifiList);
    std::list<Wifi> getWifiList();
private:
    ReadDataFromFile *m_readDataFromFile;
    std::list<Wifi> m_wifilist;
};

#endif // WIFIMANAGER_H

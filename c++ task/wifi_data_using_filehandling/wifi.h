#ifndef WIFI_H
#define WIFI_H
#include<iostream>
#include<list>
#include<fstream>
using namespace std;
class Wifi
{
public:
    Wifi(std::string wifiName, int signalStrength, std::string wifiStatus, std::string wifiPassword);
    Wifi();
    ~Wifi();

    std::string GetWifiName();
    int GetSignalStrength();
    std::string GetWifiStatus();
    std::string GetWifiPassword();

    void setWifiStatus(string wifiStatus);




private:
    std::string m_wifiName;
    int m_signalStrength;
    std::string m_wifiStatus;
    std::string m_wifiPassword;


};

#endif // WIFI_H

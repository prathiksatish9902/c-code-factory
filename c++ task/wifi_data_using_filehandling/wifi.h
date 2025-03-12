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
    void display();
 // void sortWifiList();  // New method to sort the wifi list
 //    bool compareWifi( Wifi& a,  Wifi& b);

    std::list<Wifi> m_wifilist;
    std::list<Wifi> sort(std::list<Wifi> m_wifilist);

private:
    std::string m_wifiName;
    int m_signalStrength;
    std::string m_wifiStatus;
    std::string m_wifiPassword;

    // Helper function to determine priority of WiFi status
    // static int getStatusPriority(const std::string& status);
};

#endif // WIFI_H

#include "wifi.h"

Wifi::Wifi(std::string wifiName, int signalStrength, std::string wifiStatus, std::string wifiPassword) {
    std::cout<<"wifi constructor called"<<std::endl;
    m_wifiName = wifiName;
    m_signalStrength = signalStrength;
    m_wifiStatus = wifiStatus;
    m_wifiPassword = wifiPassword;
}

Wifi::Wifi()
{
    std::cout<<"wifi default constructor called"<<std::endl;
}

Wifi::~Wifi()
{
    std::cout<<"wifi destructor called"<<std::endl;
}

std::string Wifi::GetWifiName()
{
    // std::cout<<"get wifi name function called"<<std::endl;
    return m_wifiName;
}

int Wifi::GetSignalStrength()
{
    // std::cout<<"get signal strength function called"<<std::endl;
    return m_signalStrength;
}

std::string Wifi::GetWifiStatus()
{
    // std::cout<<"get wifi status function called"<<std::endl;
    return m_wifiStatus;
}

std::string Wifi::GetWifiPassword()
{
    // std::cout<<"get wifi password function called"<<std::endl;
    return m_wifiPassword;
}





void Wifi::setWifiStatus(string wifiStatus)
{
    // std::cout<<"set wifi status function called"<<std::endl;
    m_wifiStatus = wifiStatus;
    std::cout<<"parameter value"<<wifiStatus<<std::endl;
    std::cout<<"member variable value"<<m_wifiStatus<<std::endl;
}










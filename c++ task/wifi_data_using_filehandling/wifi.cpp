#include "wifi.h"
// #include <algorithm>

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
    std::cout<<"get wifi name function called"<<std::endl;
    return m_wifiName;
}

int Wifi::GetSignalStrength()
{
    std::cout<<"get signal strength function called"<<std::endl;
    return m_signalStrength;
}

std::string Wifi::GetWifiStatus()
{
    std::cout<<"get wifi status function called"<<std::endl;
    return m_wifiStatus;
}

std::string Wifi::GetWifiPassword()
{
    std::cout<<"get wifi password function called"<<std::endl;
    return m_wifiPassword;
}

// // Helper function to determine the priority of WiFi status
// int Wifi::getStatusPriority(const std::string& status) {
//     if (status == "Connected") return 0;
//     if (status == "Saved") return 1;
//     if (status == "Available") return 2;
//     return 3; // Lowest priority for unknown statuses
// }

// void Wifi::sortWifiList() {
//     m_wifilist.sort([](const Wifi& a, const Wifi& b) {
//         int priorityA = Wifi::getStatusPriority(a.m_wifiStatus);
//         int priorityB = Wifi::getStatusPriority(b.m_wifiStatus);

//         // Always place "Connected" networks first
//         if (priorityA != priorityB) {
//             return priorityA < priorityB;
//         }

//         // For "Saved" and "Available" networks, sort by signal strength (higher first)
//         return a.m_signalStrength > b.m_signalStrength;
//     });
// }

void Wifi::display() {
    // for (const auto& wifi : m_wifilist) {
    //     std::cout << wifi.GetWifiName() << "\n"
    //               << wifi.GetSignalStrength() << "\n"
    //               << wifi.GetWifiStatus() << "\n"
    //               << wifi.GetWifiPassword() << std::endl;
    // }

    for(auto i = m_wifilist.begin(); i!=m_wifilist.end(); i++){
        std::cout<<"name :"<<i->GetWifiName()<<std::endl;
        std::cout<<"signal strength :"<<i->GetSignalStrength()<<std::endl;
        std::cout<<"status :"<<i->GetWifiStatus()<<std::endl;
        std::cout<<"password :"<<i->GetWifiPassword()<<std::endl;



    }
}

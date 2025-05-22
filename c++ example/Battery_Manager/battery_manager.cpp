#include "battery_manager.h"


Battery_Manager::Battery_Manager(int batteryPercent) {
    m_batteryPercent = batteryPercent;
}

Battery_Manager::~Battery_Manager()
{

}

int Battery_Manager::batteryPercent() const
{
    return m_batteryPercent;
}

void Battery_Manager::setBatteryPercent(int newBatteryPercent)
{
    m_batteryPercent = newBatteryPercent;
}



void Battery_Manager::SimulateBattery()
{
    for(int i = 0 ; i < 20; i++)
    {
        m_batteryPercent = m_batteryPercent - 5;
        if(m_batteryPercent <= 0)
        {
            break;
        }
        std::cout<<"battery percent :"<<m_batteryPercent<<std::endl;
    }
}

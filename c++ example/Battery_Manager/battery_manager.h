#ifndef BATTERY_MANAGER_H
#define BATTERY_MANAGER_H
#include<iostream>
#include"sound_manager.h"
class Battery_Manager
{
private:
    int m_batteryPercent;
public:
    Battery_Manager(int batteryPercent);
    ~Battery_Manager();



    void SimulateBattery();
    int batteryPercent() const;
    void setBatteryPercent(int newBatteryPercent);
};

#endif // BATTERY_MANAGER_H

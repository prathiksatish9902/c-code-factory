#ifndef BIKE_H
#define BIKE_H
#include"vehicle.h"
class Bike:public Vehicle
{
public:
    Bike();
    ~Bike();

    void SetCC(int cc);
    int GetCC();

    void SetBikeRentTime(std::string bikerentTime);
    std::string GetBikeRentTime();

    void SetBikeStatus(std::string bikeStatus);
    std::string GetBikeStatus();

    void SetBikeRentCost(float bikerentcost);
    float GetBikeRentCost();
private:
    int m_cc;
    std::string m_bikerentTime;
    std::string m_bikestatus;
    float m_bikerentcost;
};

#endif // BIKE_H

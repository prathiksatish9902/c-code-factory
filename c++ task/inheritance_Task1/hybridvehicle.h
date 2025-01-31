#ifndef HYBRIDVEHICLE_H
#define HYBRIDVEHICLE_H
#include"bike.h"
#include"car.h"
class HybridVehicle:public Bike,public Car
{
public:
    HybridVehicle(float h_seat,std::string h_vehicleName, std::string h_manufactureDate, int h_wheel, std::string h_engineType);

   // HybridVehicle(int h_mirror, std::string h_vehicleName, std::string h_manufactureDate, int h_wheel, std::string h_engineType);
    HybridVehicle();

    ~HybridVehicle();
};

#endif // HYBRIDVEHICLE_H

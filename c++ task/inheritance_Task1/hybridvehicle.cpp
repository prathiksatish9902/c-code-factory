#include "hybridvehicle.h"
#include"vehicle.h"
// HybridVehicle::HybridVehicle(int h_mirror,std::string h_vehicleName,std::string h_manufactureDate,int h_wheel,std::string h_engineType):Bike(h_mirror,h_vehicleName,h_manufactureDate,h_wheel,h_engineType)  {
//     std::cout<<"hybrid constructor called"<<std::endl;

// }
HybridVehicle::HybridVehicle(float h_seat,std::string h_vehicleName,std::string h_manufactureDate,int h_wheel,std::string h_engineType):Car(h_seat,h_vehicleName,h_manufactureDate,h_wheel,h_engineType)   {
    std::cout<<"hybrid constructor called"<<std::endl;

}

HybridVehicle::HybridVehicle()
{

}


HybridVehicle::~HybridVehicle()
{
    std::cout<<"hybrid destructor called"<<std::endl;

}

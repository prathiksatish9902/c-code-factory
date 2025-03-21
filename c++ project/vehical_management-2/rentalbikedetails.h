#ifndef RENTALBIKEDETAILS_H
#define RENTALBIKEDETAILS_H
#include"rentalvehicaldetails.h"
class RentalBikeDetails:public RentalVehicalDetails
{
public:
    RentalBikeDetails(std::string bikeNumber , std::string bikeName , std::string bikeModelName, std::string bikeStatus , float bikeCost);
    ~RentalBikeDetails();

};

#endif // RENTALBIKEDETAILS_H

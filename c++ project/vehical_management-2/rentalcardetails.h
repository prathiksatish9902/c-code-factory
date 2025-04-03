#ifndef RENTALCARDETAILS_H
#define RENTALCARDETAILS_H
#include"rentalvehicaldetails.h"
class RentalCarDetails:public RentalVehicalDetails
{
public:
    RentalCarDetails(std::string carNumber , std::string carName ,std::string carModelName, std::string carStatus , float carCost);
    ~RentalCarDetails();
};

#endif // RENTALCARDETAILS_H

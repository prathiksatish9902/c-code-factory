#ifndef BOOKINGREPORT_H
#define BOOKINGREPORT_H
#include"vehicle.h"
class BookingReport
{
public:
    BookingReport(std::string customername , std::string phonenumber , std::string DLnumber , std::string customeraddress , std::string vehiclename , std::string amountstatus , std::string bookingid, std::string vehicalType , std::string vehicalnumber);
    ~BookingReport();

    void SetCustomerName(std::string customername);
    std::string GetCustomerName();

    void SetPhoneNumber(std::string phonenumber);
    std::string GetPhoneNumber();

    void SetDLNumber(std::string DLnumber);
    std::string GetDLNumber();

    void SetCustomerAddress(std::string customeraddress);
    std::string GetCustomerAddress();

    void SetVehicleName(Vehicle *vehicle);
    std::string GetVehicleName();

    void SetAmountStatus(std::string amountstatus);
    std::string GetAmountStatus();

    void SetBookId(std::string bookingid);
    std::string GetBookId();

    void SetVehicalType(std::string vehicaltype);
    std::string GetVehicalType();

    void SetVehicalNumber(std::string vehicalnumber);
    std::string GetVehicalNumber();
private:
    std::string m_customername;
    std::string m_phonenumber;
    std::string m_DLnumber;
    std::string m_customeraddress;
    std::string m_vehiclename;
    std::string m_amountstatus;
    std::string m_bookingid;
    std::string m_vehicalType;
    std::string m_vehicalNumber;

};

#endif // BOOKINGREPORT_H

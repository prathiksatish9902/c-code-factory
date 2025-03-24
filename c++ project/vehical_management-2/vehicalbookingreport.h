#ifndef VEHICALBOOKINGREPORT_H
#define VEHICALBOOKINGREPORT_H
#include"rentalvehicaldetails.h"
#include"paymentmethod.h"
class vehicalBookingReport
{
public:
    vehicalBookingReport(std::string customerName , std::string DLNumber , std::string customerPhoneNumber , std::string customerAddress ,std::string bookingId , std::string vehicalType , std::string rentedVehicalName , std::string rentedVehicalNumber , float rentedVehicalCost,
                   std::string rentalDuration,
                         std::string amountStatus,
                         std::string paymentMode,
                         std::string paymentId,
                         std::string paymentReferenceNumber
      );
    ~vehicalBookingReport();

    void SetCustomerName(std::string customerName);
    std::string GetCustomerName();

    std::string GetDLNumber();
    void setDLNumber(std::string DLNumber);

    void SetPhoneNumber(std::string phoneNumber);
    std::string GetPhoneNumber();

    void SetCustomerAddress(std::string customerAddress);
    std::string GetCustomerAddress();

    void SetBookingId(std::string bookingId);
    std::string GetBookingId();

    void SetRentedVehicalName(std::string vehicalName);
    std::string GetRentedVehicalName();

    void SetRentedVehicalNumber(std::string vehicalNumber);
    std::string GetRentedVehicalNumber();

    void SetRentedVehicalCost(float vehicalCost);
    float GetRentedVehicalCost();

    void SetVehicalType(std::string vehicalType);
    std::string GetVehicalType();

    void SetRentalDuration(std::string rentalDuration);
    std::string GetRentalDuration();

    void SetAmountStatus(std::string amountStatus);
    std::string GetAmountStatus();

    void SetPaymentMode(std::string paymentMode);
    std::string GetPaymentMode();

    void SetPaymentId();
    std::string GetPaymentId();

    void SetPaymentNumber();
    std::string GetPaymentNumber();

private:
    std::string m_customerName;
    std::string m_DLNumber;
    std::string m_customerPhoneNumber;
    std::string m_customerAddress;
    std::string m_bookingId;
    std::string m_vehicalType;
    std::string m_rentedVehicalName;
    std::string m_rentedVehicalNumber;
    float m_rentedVehicalcost;
    std::string m_rentalDuration;
    std::string m_amountStatus;
    std::string m_paymentMode;
    std::string m_paymentId;
    std::string m_paymentReferenceNumber;
    RentalVehicalDetails *m_vehicalDetails;
    PaymentMethod *payment;
};

#endif // VEHICALBOOKINGREPORT_H

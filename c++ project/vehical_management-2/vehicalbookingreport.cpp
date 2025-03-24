#include "vehicalbookingreport.h"

vehicalBookingReport::vehicalBookingReport(std::string customerName , std::string DLNumber , std::string customerPhoneNumber , std::string customerAddress ,std::string bookingId , std::string vehicalType , std::string rentedVehicalName , std::string rentedVehicalNumber , float rentedVehicalCost,
                                           std::string rentalDuration,
                                           std::string amountStatus,
                                           std::string paymentMode,
                                           std::string paymentId,
                                           std::string paymentReferenceNumber) {
    std::cout<<"vehical booking report constructor called"<<std::endl;
    m_customerName = customerName;
    m_DLNumber = DLNumber;
    m_customerPhoneNumber = customerPhoneNumber;
    m_customerAddress = customerAddress;
    m_bookingId = bookingId;
    m_vehicalType = vehicalType;
    m_rentedVehicalName = rentedVehicalName;
    m_rentedVehicalNumber = rentedVehicalNumber;
    m_rentedVehicalcost = rentedVehicalCost;
    m_rentalDuration = rentalDuration;
    m_amountStatus = amountStatus;
    m_paymentMode = paymentMode;
    m_paymentId = paymentId;
    m_paymentReferenceNumber = paymentReferenceNumber;
}

vehicalBookingReport::~vehicalBookingReport()
{
    std::cout<<"vehical booking report destructor called"<<std::endl;

}

void vehicalBookingReport::SetCustomerName(std::string customerName)
{
    m_customerName = customerName;
}

std::string vehicalBookingReport::GetCustomerName()
{
    return m_customerName;
}

std::string vehicalBookingReport::GetDLNumber()
{
    return m_DLNumber;
}

void vehicalBookingReport::setDLNumber(std::string DLNumber)
{
    m_DLNumber = DLNumber;
}

void vehicalBookingReport::SetPhoneNumber(std::string phoneNumber)
{
    m_customerPhoneNumber = phoneNumber;
}

std::string vehicalBookingReport::GetPhoneNumber()
{
    return m_customerPhoneNumber;
}

void vehicalBookingReport::SetCustomerAddress(std::string customerAddress)
{
    m_customerAddress = customerAddress;
}

std::string vehicalBookingReport::GetCustomerAddress()
{
    return m_customerAddress;
}

void vehicalBookingReport::SetBookingId(std::string bookingId)
{
    m_bookingId = bookingId;
}

std::string vehicalBookingReport::GetBookingId()
{
    return m_bookingId;
}

void vehicalBookingReport::SetRentedVehicalName(std::string vehicalName)
{
    vehicalName = m_vehicalDetails->GetVehicalName();
}

std::string vehicalBookingReport::GetRentedVehicalName()
{
    return m_vehicalDetails->GetVehicalName();
}

void vehicalBookingReport::SetRentedVehicalNumber(std::string vehicalNumber)
{
    vehicalNumber = m_vehicalDetails->GetVehicalNumber();
}

std::string vehicalBookingReport::GetRentedVehicalNumber()
{
    return m_vehicalDetails->GetVehicalNumber();
}

void vehicalBookingReport::SetRentedVehicalCost(float vehicalCost)
{
    vehicalCost = m_vehicalDetails->GetVehicalCost();
}

float vehicalBookingReport::GetRentedVehicalCost()
{
    return m_vehicalDetails->GetVehicalCost();
}

void vehicalBookingReport::SetVehicalType(std::string vehicalType)
{
    m_vehicalType = vehicalType;
}

std::string vehicalBookingReport::GetVehicalType()
{
    return m_vehicalType;
}

void vehicalBookingReport::SetRentalDuration(std::string rentalDuration)
{
    m_rentalDuration = rentalDuration;
}

std::string vehicalBookingReport::GetRentalDuration()
{
    return m_rentalDuration;
}

void vehicalBookingReport::SetAmountStatus(std::string amountStatus)
{
    m_amountStatus = amountStatus;
}

std::string vehicalBookingReport::GetAmountStatus()
{
    return m_amountStatus;
}

void vehicalBookingReport::SetPaymentMode(std::string paymentMode)
{
    m_paymentMode = paymentMode;
}

std::string vehicalBookingReport::GetPaymentMode()
{
    return m_paymentMode;
}

void vehicalBookingReport::SetPaymentId()
{
    m_paymentId = payment->GetUniqueId();
   // m_paymentId = paymentId;
}

std::string vehicalBookingReport::GetPaymentId()
{
    return m_paymentId;
}

void vehicalBookingReport::SetPaymentNumber()
{
    // paymentNumber = payment->GetUniqueRefrence();
    //m_paymentReferenceNumber = paymentNumber;

    m_paymentReferenceNumber = payment->GetUniqueRefrence();
}

std::string vehicalBookingReport::GetPaymentNumber()
{
    return m_paymentReferenceNumber;
}


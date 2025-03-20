#include "bookingreport.h"

BookingReport::BookingReport(std::string customername, std::string phonenumber , std::string DLnumber, std::string customeraddress, std::string vehiclename, std::string amountstatus, std::string bookingid, std::string vehicalType , std::string vehicalnumber, std::string paymentMode/*, std::string utrnumber, std::string cardNumber*/, std::string paymentReferenceNumber) {
    // std::cout<<"booking report constructor called"<<std::endl;
    m_customername = customername;
    m_phonenumber = phonenumber;
    m_DLnumber = DLnumber;
    m_customeraddress = customeraddress;
    m_vehiclename = vehiclename;
    m_amountstatus = amountstatus;
    m_bookingid = bookingid;
    m_vehicalType = vehicalType;
    m_vehicalNumber = vehicalnumber;
    m_paymentMode = paymentMode;
    m_paymentRefernceNumber = paymentReferenceNumber;
    // m_utrnumber = utrnumber;
    // m_cardNumber = cardNumber;
}

BookingReport::~BookingReport()
{
    // std::cout<<"booking report destructor called"<<std::endl;

}

void BookingReport::SetCustomerName(std::string customername)
{
    m_customername = customername;
}

std::string BookingReport::GetCustomerName()
{
    return m_customername;
}

void BookingReport::SetPhoneNumber(std::string phonenumber)
{
    m_phonenumber = phonenumber;
}

std::string BookingReport::GetPhoneNumber()
{
    return m_phonenumber;
}

void BookingReport::SetDLNumber(std::string DLnumber)
{
    m_DLnumber = DLnumber;
}

std::string BookingReport::GetDLNumber()
{
    return m_DLnumber;
}

void BookingReport::SetCustomerAddress(std::string customeraddress)
{
    m_customeraddress = customeraddress;
}

std::string BookingReport::GetCustomerAddress()
{
    return m_customeraddress;
}

void BookingReport::SetVehicleName(Vehicle *vehicle)
{
    m_vehiclename = vehicle->GetName();
}

std::string BookingReport::GetVehicleName()
{
    return m_vehiclename;
}

void BookingReport::SetAmountStatus(std::string amountstatus)
{
    m_amountstatus = amountstatus;
}

std::string BookingReport::GetAmountStatus()
{
    return m_amountstatus;
}

void BookingReport::SetBookId(std::string bookingid)
{
    m_bookingid = bookingid;
}

std::string BookingReport::GetBookId()
{
    return m_bookingid;
}

void BookingReport::SetVehicalType(std::string vehicaltype)
{
    m_vehicalType = vehicaltype;
}

std::string BookingReport::GetVehicalType()
{
    return m_vehicalType;
}

void BookingReport::SetVehicalNumber(std::string vehicalnumber)
{
    m_vehicalNumber = vehicalnumber;
}

std::string BookingReport::GetVehicalNumber()
{
    return m_vehicalNumber;
}

void BookingReport::setPaymentMode(std::string paymentMode)
{
    m_paymentMode = paymentMode;
}

std::string BookingReport::GetPaymentMode()
{
    return m_paymentMode;
}

void BookingReport::SetPaymentReferenceNumber(std::string paymentReferenceNumber)
{
    m_paymentRefernceNumber = paymentReferenceNumber;
}

std::string BookingReport::GetPaymentReferenceNumber()
{
    return m_paymentRefernceNumber;
}

// void BookingReport::SetUtrNumber(Vehicle *vehicle)
// {
//     m_utrnumber = vehicle->GetPaymentNumber();
// }

// std::string BookingReport::GetUtrNumber()
// {
//     return m_utrnumber;
// }

// void BookingReport::SetCardNumber(Vehicle *vehicle)
// {
//     m_cardNumber = vehicle->GetCardNumber();
// }

// std::string BookingReport::GetCardNumber()
// {
//     return m_cardNumber;
// }





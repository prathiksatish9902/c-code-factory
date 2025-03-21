#ifndef PAYMENTMETHOD_H
#define PAYMENTMETHOD_H
#include<iostream>
class PaymentMethod
{
public:
    PaymentMethod(std::string uniquePaymentId , std::string uniqueRefNumber);
    PaymentMethod();
    ~PaymentMethod();

    void SetUniqueId(std::string uniquePaymentId);
    std::string GetUniqueId();

    void SetUniqueRefrence(std::string uniqueRefNumber);
    std::string GetUniqueRefrence();


protected:
    std::string m_uniquePaymentId;
    std::string m_uniquePaymentRefNumber;
};

#endif // PAYMENTMETHOD_H

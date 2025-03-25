#ifndef PAYMENTMETHOD_H
#define PAYMENTMETHOD_H
#include<iostream>
class PaymentMethod
{
public:
    PaymentMethod(std::string uniquePaymentId , std::string uniqueRefNumber);
    PaymentMethod();
   virtual ~PaymentMethod();

    virtual void SetUniqueId(std::string uniquePaymentId) = 0;
    virtual std::string GetUniqueId() = 0;

    virtual void SetUniqueRefrence(std::string uniqueRefNumber) = 0;
    virtual std::string GetUniqueRefrence() =0;


protected:
    std::string m_uniquePaymentId;
    std::string m_uniquePaymentRefNumber;
};

#endif // PAYMENTMETHOD_H

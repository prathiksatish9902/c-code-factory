#ifndef CASHPAYMENT_H
#define CASHPAYMENT_H
#include"paymentmethod.h"
class CashPayment : public PaymentMethod
{
public:
    CashPayment(std::string uniquePaymentId , std::string uniqueRefNumber);
    CashPayment();
    ~CashPayment();

     void SetUniqueId(std::string uniquePaymentId) override ;
     std::string GetUniqueId() override;

     void SetUniqueRefrence(std::string uniqueRefNumber) override ;
     std::string GetUniqueRefrence() override;
};

#endif // CASHPAYMENT_H

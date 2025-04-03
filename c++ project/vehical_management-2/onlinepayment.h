#ifndef ONLINEPAYMENT_H
#define ONLINEPAYMENT_H
#include"paymentmethod.h"
class OnlinePayment : public PaymentMethod
{
public:
    OnlinePayment(std::string onlinePaymentId , std::string onlinePaymentRefNumber);
    OnlinePayment();
    ~OnlinePayment();

    void SetUniqueId(std::string uniquePaymentId) override ;
    std::string GetUniqueId() override;

    void SetUniqueRefrence(std::string uniqueRefNumber) override ;
    std::string GetUniqueRefrence() override;
};

#endif // ONLINEPAYMENT_H

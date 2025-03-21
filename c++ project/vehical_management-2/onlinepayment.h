#ifndef ONLINEPAYMENT_H
#define ONLINEPAYMENT_H
#include"paymentmethod.h"
class OnlinePayment : public PaymentMethod
{
public:
    OnlinePayment(std::string onlinePaymentId , std::string onlinePaymentRefNumber);
    ~OnlinePayment();
};

#endif // ONLINEPAYMENT_H

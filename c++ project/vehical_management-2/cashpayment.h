#ifndef CASHPAYMENT_H
#define CASHPAYMENT_H
#include"paymentmethod.h"
class CashPayment : public PaymentMethod
{
public:
    CashPayment(std::string cashId , std::string cashRefNumber);
    ~CashPayment();
};

#endif // CASHPAYMENT_H

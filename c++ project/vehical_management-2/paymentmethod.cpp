#include "paymentmethod.h"

PaymentMethod::PaymentMethod(std::string uniquePaymentId , std::string uniqueRefNumber) {
    m_uniquePaymentId = uniquePaymentId;
    m_uniquePaymentRefNumber = uniqueRefNumber;
}

PaymentMethod::PaymentMethod()
{

}

PaymentMethod::~PaymentMethod()
{

}

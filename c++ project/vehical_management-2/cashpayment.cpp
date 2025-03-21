#include "cashpayment.h"

CashPayment::CashPayment(std::string cashId, std::string cashRefNumber) {
    m_uniquePaymentId = cashId;
    m_uniquePaymentRefNumber = cashRefNumber;
}

CashPayment::~CashPayment()
{

}

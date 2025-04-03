#include "cashpayment.h"

CashPayment::CashPayment(std::string uniquePaymentId, std::string uniqueRefNumber) {
    m_uniquePaymentId = uniquePaymentId;
    m_uniquePaymentRefNumber = uniqueRefNumber;
}

CashPayment::CashPayment()
{

}

CashPayment::~CashPayment()
{

}

void CashPayment::SetUniqueId(std::string uniquePaymentId)
{
    m_uniquePaymentId = uniquePaymentId;
}

std::string CashPayment::GetUniqueId()
{
    return m_uniquePaymentId;
}

void CashPayment::SetUniqueRefrence(std::string uniqueRefNumber)
{
    m_uniquePaymentRefNumber = uniqueRefNumber;
}

std::string CashPayment::GetUniqueRefrence()
{
    return m_uniquePaymentRefNumber;
}

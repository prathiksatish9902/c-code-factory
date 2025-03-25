#include "onlinepayment.h"

OnlinePayment::OnlinePayment(std::string onlinePaymentId, std::string onlinePaymentRefNumber) {
    m_uniquePaymentId = onlinePaymentId;
    m_uniquePaymentRefNumber = onlinePaymentRefNumber;
}

OnlinePayment::OnlinePayment()
{

}

OnlinePayment::~OnlinePayment()
{

}

void OnlinePayment::SetUniqueId(std::string uniquePaymentId)
{
    m_uniquePaymentId = uniquePaymentId;

}

std::string OnlinePayment::GetUniqueId()
{
    return m_uniquePaymentId;
}

void OnlinePayment::SetUniqueRefrence(std::string uniqueRefNumber)
{
    m_uniquePaymentRefNumber = uniqueRefNumber;
}

std::string OnlinePayment::GetUniqueRefrence()
{
    return m_uniquePaymentRefNumber;
}

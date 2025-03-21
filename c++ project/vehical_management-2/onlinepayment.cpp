#include "onlinepayment.h"

OnlinePayment::OnlinePayment(std::string onlinePaymentId, std::string onlinePaymentRefNumber) {
    m_uniquePaymentId = onlinePaymentId;
    m_uniquePaymentRefNumber = onlinePaymentRefNumber;
}

OnlinePayment::~OnlinePayment()
{

}

#ifndef STAFF_H
#define STAFF_H
#include"details.h"
class Staff
{
private:
    Details *m_staffDetails;
public:
    Staff(int id , std::string name , std::string department);
    ~Staff();
    void setStaffDetails(Details *newStaffDetails);
    Details *getStaffDetails() const;
};

#endif // STAFF_H

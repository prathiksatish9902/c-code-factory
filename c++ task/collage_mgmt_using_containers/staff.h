#ifndef STAFF_H
#define STAFF_H
#include"commondetails.h"
class Staff
{
public:
    Staff(int id , std::string name);
    ~Staff();

    CommonDetails *getStaffID() const;
    CommonDetails *getStaffName() const;

private:
    CommonDetails *m_StaffDetails;
};

#endif // STAFF_H

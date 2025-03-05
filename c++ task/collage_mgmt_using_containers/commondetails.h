#ifndef COMMONDETAILS_H
#define COMMONDETAILS_H
#include<iostream>
class CommonDetails
{
public:
    CommonDetails();
    ~CommonDetails();

    void SetId(int id);
    int GetId();

    void SetName(std::string name);
    std::string GetName();
private:
    int m_id;
    std::string m_name;
};

#endif // COMMONDETAILS_H

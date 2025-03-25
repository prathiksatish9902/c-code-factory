#ifndef ADMIN_H
#define ADMIN_H
#include<iostream>

class Admin
{
public:
    Admin(std::string adminUsername , std::string adminPassword);
    ~Admin();

    void SetAdminUsername(std::string adminUsername);
    std::string GetAdminUserName();

    void SetAdminPassword(std::string adminPassword);
    std::string GetAdminPassword();

private:
    std::string m_adminUsername;
    std::string m_adminPassword;
};

#endif // ADMIN_H

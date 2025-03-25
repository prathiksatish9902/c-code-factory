#include "admin.h"

Admin::Admin(std::string adminUsername, std::string adminPassword) {
    m_adminUsername = adminUsername;
    m_adminPassword = adminPassword;
}

Admin::~Admin()
{

}

void Admin::SetAdminUsername(std::string adminUsername)
{
    m_adminUsername = adminUsername;

}

std::string Admin::GetAdminUserName()
{
    return m_adminUsername;
}

void Admin::SetAdminPassword(std::string adminPassword)
{
    m_adminPassword = adminPassword;

}

std::string Admin::GetAdminPassword()
{
    return m_adminPassword;
}

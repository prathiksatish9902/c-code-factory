#include "user.h"

User::User(std::string userName, std::string userPassword) {
    m_userName = userName;
    m_userPassword = userPassword;
}

User::~User()
{

}

void User::SetUserName(std::string userName)
{
    m_userName = userName;

}

std::string User::GetUsername()
{
    return m_userName;
}

void User::SetUserPassword(std::string userPassword)
{
    m_userPassword = userPassword;

}

std::string User::GetUserPassword()
{
    return m_userPassword;
}

#ifndef USER_H
#define USER_H
#include<iostream>
class User
{
public:
    User(std::string userName , std::string userPassword);
    ~User();

    void SetUserName(std::string userName );
    std::string GetUsername();

    void SetUserPassword(std::string userPassword);
    std::string GetUserPassword();
private:
    std::string m_userName;
    std::string m_userPassword;
};

#endif // USER_H

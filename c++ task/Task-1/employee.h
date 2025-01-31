#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<iostream>
class Employee
{
    int m_id;
    std::string m_name;
    int m_age;
    std::string m_phoneNumber;
    std::string m_mail;
public:
    Employee();
    Employee(int emp_id,std::string emp_name,int emp_age,std::string emp_phoneNumber,std::string emp_mail);
    ~Employee();
    static void m_display();
};

#endif // EMPLOYEE_H


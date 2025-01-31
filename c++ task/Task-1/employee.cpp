#include "employee.h"

Employee::Employee(int emp_id,std::string emp_name,int emp_age,std::string emp_phoneNumber,std::string emp_mail) {
    std::cout<<" employee constructor called"<<std::endl;
    m_id = emp_id;
    m_name = emp_name;
    std::cout<<"emp"<<m_name;
    m_age = emp_age;
    m_phoneNumber = emp_phoneNumber;
    m_mail = emp_mail;
}
Employee::Employee(){
    std::cout<<"empty constructor called"<<std::endl;
}
Employee::~Employee()
{
    std::cout << " Employee Destructor called"<<std::endl;
}

void Employee :: m_display(){
    std::cout<<" employee display function called"<<std::endl;
    //Employee e(1,"Prathik",23,"1234567890","mail@prathik");
    Employee e;
    std::cout<<"employee id : "<<e.m_id<<std::endl;
    std::cout<<"employee name : "<<e.m_name<<std::endl;
    std::cout<<"employee age : "<<e.m_age<<std::endl;
    std::cout<<"employee phone number : "<<e.m_phoneNumber<<std::endl;
    std::cout<<"employee mail : "<<e.m_mail<<std::endl;

}

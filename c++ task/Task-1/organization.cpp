#include "organization.h"

Organization::Organization(int id, std::string name, int age, std::string phone, std::string mail) {
    std::cout<<"Organization constructor called"<<std::endl;
    Employee emp1(id,name,age,phone,mail);
    std::cout<<name;
    //emp1.m_display();


}

Organization::~Organization(){
    std::cout<<"organization destructor called"<<std::endl;
}

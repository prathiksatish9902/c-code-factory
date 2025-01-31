#include "student.h"





STUDENT::STUDENT(std::string name,int id,int standard,std::string address) {
    std::cout<<"student display called"<<std::endl;
    m_name = name;
    m_id = id;
    m_standard = standard;
    m_address = address;
}

void STUDENT::display(){
    std::cout<<"display function called"<<std::endl;
    std::cout<<"name:"<<m_name<<std::endl;
    std::cout<<"id:"<<m_id<<std::endl;
    std::cout<<"standard:"<<m_standard<<std::endl;
    std::cout<<"address:"<<m_address<<std::endl;


}

#include "employee.h"
#include "office.h"

Employee::Employee(const std::string& name, Office* office)
    : name(name), officePtr(office), empPtr(nullptr) {
    std::cout<<"employee constructor with office parameter"<<std::endl;
    if (officePtr) {
        officePtr->addEmployee(this);
    }
}

Employee::Employee(const std::string& name, Employee* emp)
    : name(name), officePtr(nullptr), empPtr(emp) {
    std::cout<<"employee constructor with employee parameter"<<std::endl;
    if (empPtr) {
        empPtr->addChild(this);
    }
}

Employee::~Employee()
{
    std::cout<<"employee destructor called"<<std::endl;
}

std::string Employee::GetName()
{
    return name;
}

void Employee::addChild(Employee* child) {
    children.push_back(child);
}

void Employee::print() {
    std::cout << "employee print called" << std::endl;
    printChildren();
}

void Employee::printChildren() {
    for (auto child : children) {
        child->print();
        std::cout<<child->name<<std::endl;
    }
}

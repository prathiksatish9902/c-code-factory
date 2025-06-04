#include "office.h"
#include "employee.h"

Office::Office(const std::string name) : BaseObject(name) {
    std::cout<<"office constructor called"<<std::endl;
}

Office::~Office()
{
    std::cout<<"office destructor called"<<std::endl;
}

void Office::addEmployee(Employee* emp) {
    std::cout<<"office constructor called"<<std::endl;
    addChild(emp);
}

void Office::print() {
    std::cout << "office print called" << std::endl;
    printChildren();
}

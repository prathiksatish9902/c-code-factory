#include "employee.h"
#include "office.h"

Employee::Employee(const std::string& name, Office* office)
    : BaseObject(name) {
    std::cout<<"employee constructor with office parameter"<<std::endl;
    if (office) {
        office->addEmployee(this);
    }
}

Employee::Employee(const std::string& name, Employee* emp)
    : BaseObject(name) {
    std::cout<<"employee constructor with employee parameter"<<std::endl;
    if (emp) {
        emp->addChild(this);
    }
}

Employee::~Employee()
{
    std::cout<<"employee destructor called"<<std::endl;
}

void Employee::print() {
    std::cout << "employee print called" << std::endl;
    printChildren();
}

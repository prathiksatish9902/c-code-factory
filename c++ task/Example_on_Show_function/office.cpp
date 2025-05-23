#include "office.h"
#include "employee.h"
Office::Office() {
    std::cout<<"office constructor called"<<std::endl;
}

Office::~Office()
{
    std::cout<<"office destructor called"<<std::endl;
}

void Office::addEmployee(Employee* emp) {
    std::cout<<"office constructor called"<<std::endl;

    employees.push_back(emp);
}

void Office::print() {
    std::cout << "office print called" << std::endl;
    for (auto emp : employees) {
        emp->print();
        std::cout<<emp->GetName()<<std::endl;
    }
}

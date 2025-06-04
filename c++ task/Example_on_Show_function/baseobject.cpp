#include "baseobject.h"

BaseObject::BaseObject(const std::string name)
    : name(name) {
    std::cout<<"base object constructor called"<<std::endl;
}

BaseObject::~BaseObject() {
    std::cout<<"base object destructor called"<<std::endl;

}

std::string BaseObject::GetName() const {
    return name;
}

void BaseObject::addChild(BaseObject* child) {
    children.push_back(child);
}

void BaseObject::printChildren() {
    for (auto child : children) {
        child->print();
        std::cout << child->GetName() << std::endl;
    }
}

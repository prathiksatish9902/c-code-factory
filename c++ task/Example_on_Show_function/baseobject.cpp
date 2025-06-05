#include "baseobject.h"

BaseObject::BaseObject(const std::string name)
    : name(name) {
    // std::cout<<"base object constructor called"<<std::endl;
}

BaseObject::BaseObject()
{
    // std::cout<<"base object empty constructor called"<<std::endl;

}

BaseObject::~BaseObject() {
    // std::cout<<"base object destructor called"<<std::endl;

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

std::vector<BaseObject*> BaseObject::findChild(const std::string name) {
    std::vector<BaseObject*> result;
    if (this->GetName() == name) {
        result = this->children;
    } else {
        for (auto child : children) {
            result = child->findChild(name);
            if (!result.empty()) {
                break;
            }
        }
    }
    if (result.empty()) {
        std::cout << "Child with name '" << name << "' not found or has no children." << std::endl;
    } else {
        std::cout << "Children of " << name << ":" << std::endl;
        for (auto c : result) {
            std::cout << c->GetName()<< std::endl;
        }
    }
    return result;
}

void BaseObject::getme()
{
    std::cout << "base object getme function called for " << GetName() << std::endl;
    for (auto child : children) {
        child->getme();
    }
}

#ifndef BASEOBJECT_H
#define BASEOBJECT_H

#include <string>
#include <iostream>
#include <vector>

class BaseObject {
public:
    BaseObject(const std::string name);
    virtual ~BaseObject();

    std::string GetName() const;
    virtual void print() = 0;

    void addChild(BaseObject* child);
    void printChildren();

protected:
    std::string name;
    std::vector<BaseObject*> children;
};

#endif // BASEOBJECT_H

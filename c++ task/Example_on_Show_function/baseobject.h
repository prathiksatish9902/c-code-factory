#ifndef BASEOBJECT_H
#define BASEOBJECT_H

#include <string>
#include <iostream>
#include <vector>

class BaseObject {
public:
    BaseObject(const std::string name);
    BaseObject();
    virtual ~BaseObject();

    std::string GetName() const;
    virtual void print() = 0;

    void addChild(BaseObject* child);
    void printChildren();
    std::vector<BaseObject*> findChild(const std::string name);


    void getme();

protected:
    std::string name;
    std::vector<BaseObject*> children;
};

#endif // BASEOBJECT_H

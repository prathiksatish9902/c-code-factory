#ifndef WIRE_H
#define WIRE_H
#include<iostream>
// #include"acvents.h"
// #include"switch.h"
class Wire
{
public:
    std::string m_status;
    Wire();
    ~Wire();
    void connect();
    void disconnect();
};

#endif // WIRE_H

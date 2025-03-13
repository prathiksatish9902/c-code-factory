#ifndef COLLAGE_H
#define COLLAGE_H
#include<iostream>

class Collage
{
public:
    Collage(std::string collageName , int collageId , std::string collageAddress);
    Collage();
    ~Collage();

    std::string GetcollageName();
    int GetcollageId();
    std::string GetcollageAddress();

    void SetcollageName(std::string collageName);
    void SetcollageId(int collageId);
    void SetcollageAddress(std::string collageAddress);

private:
    std::string m_collageName;
    int m_collageId;
    std::string m_collageAddress;
};

#endif // COLLAGE_H

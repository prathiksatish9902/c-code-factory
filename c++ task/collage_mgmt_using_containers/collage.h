#ifndef COLLAGE_H
#define COLLAGE_H
#include"commondetails.h"
#include"management.h"
class Collage
{
public:
    Collage(int id , std::string name);
    ~Collage();

    CommonDetails *getCollageId() const;
    CommonDetails *getCollageName() const;


private:
    CommonDetails *m_CollageDetails;
};

#endif // COLLAGE_H

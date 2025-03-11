#ifndef UNIVERSITY_H
#define UNIVERSITY_H
#include"collage.h"
#include<list>
class University
{
public:
    University();
    ~University();

    void addCollage();
    void deleteCollage();
    void updateCollage();

private:
    Collage *collages;
    std::list<Collage> collageList;
};

#endif // UNIVERSITY_H

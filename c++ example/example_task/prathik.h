#ifndef PRATHIK_H
#define PRATHIK_H
#include<iostream>
#include<vector>
class Darshan;
class Prathik
{
public:
    Prathik();
    ~Prathik();

    void pushback(Darshan dars1);
private:
    Darshan *m_dars;
    std::vector<Darshan> darslist;

};

#endif // PRATHIK_H

#ifndef TEMP_EX_H
#define TEMP_EX_H
#include<iostream>
template<typename T,typename F>
class Temp_ex
{
public:
    T x = 6;
    Temp_ex();
    //template<typename T>
    T add(T a, T b);
    T sub(F m, F n);
};

#endif // TEMP_EX_H

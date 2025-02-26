#include "temp_ex.h"
template<typename T, typename F>
Temp_ex<T,F>::Temp_ex() {}

template<typename T, typename F>
T Temp_ex<T,F>::add(T a, T b){
    //a = 5;
    //b = 4;
    return a + b;
}

template<typename T, typename F>
T Temp_ex<T,F>::sub(F m, F n)
{
    return 0;
}
//template double Temp_ex::add<double>(double,double);
template class Temp_ex<int,std::string>;
//template double Temp_ex::add<double>(T,T);
//template float Temp_ex::sub<float>(float,float);

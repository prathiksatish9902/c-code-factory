#include "sum.h"
template <typename I, typename D>
Sum<I,D>::Sum() {}
template <typename I, typename D>
Sum<I,D>::~Sum() {}

template <typename I, typename D>
D Sum<I,D>::add(D a, D b){
    return a+b;
}
template class Sum<int,double>;
template class Sum<double,double>;
template class Sum<int,int>;
template class Sum<double,int>;

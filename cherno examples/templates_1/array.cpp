#include "array.h"
template <typename T ,int n>
Array<T , n>::Array() {}

template <typename T ,int n>
int Array<T , n>::getSize()
{
    return n;
}
template class Array<int , 5>;

#ifndef ITER
#define ITER

#include <iostream>

template<typename T>

void iter(T *array, size_t len, void (*f)(T &))
{
    size_t i = 0;
    while (i < len)
    {
        f (array[i]);
        i++;
    }
}
template<typename T>

void print(T &array)
{
    std::cout << array << std::endl;
}

#endif
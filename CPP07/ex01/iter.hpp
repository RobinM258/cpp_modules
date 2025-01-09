#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T>

void iter(T *array, long int len, void (*f)(T &))
{
    if (len < 0)
    {
        std::cout << "Integer must be positive " << len << std::endl;
        return ;
    }
    long int i = 0;
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
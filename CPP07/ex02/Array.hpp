#ifndef ARRAY
#define ARRAY

#include <iostream>

template < typename T>

class Array {
    private:
        T* array;
        unsigned int size;
    public:
        Array(void): array (new T()), size (0) {};
        Array(unsigned int nb): array (new T[nb]), size (nb) {};
        Array (const Array& src): array (new T[src.size]) {
        int i = 0;
        while (i < size)
        {
            array[i] = src.array[i];
            i++;
        }
       };
       Array& operator=(const Array &src) 
       {
            if (this != &src)
            {
                delete [] array;
                array = new T[src.size()];
                size = src.size;
                int i = 0;
                while (i < size)
                {
                    array[i] = src.array[i];
                    i++;
                }
            }
       };
       ~Array(void){ delete [] array;};
    
};

#endif
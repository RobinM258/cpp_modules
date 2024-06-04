#ifndef ARRAY
#define ARRAY

#include <iostream>

template < typename T>

class Array {
    private:
        T* array;
        unsigned int size;
    public:
        Array(void): array (new T[0]), size (0) {};
        Array(unsigned int nb): array (new T[nb]), size (nb) {};
        Array (const Array& src): array (new T[src.size]), size(src.size) {
        unsigned int i = 0;
        while (i < size)
        {
            array[i] = src.array[i];
            i++;
        }
       };
       T& operator[] (unsigned int index) const {
            if (index >= size) {
                throw Out_Of_Range();
            }
            return (array[index]);
       }
       Array& operator=(const Array &src) 
       {
            if (this != &src)
            {
                delete [] array;
                array = new T[size];
                size = src.size;
                unsigned int i = 0;
                while (i < size)
                {
                    array[i] = src.array[i];
                    i++;
                }
            }
            return *this;
       };
       ~Array(void){ delete [] array;};
      
    class Out_Of_Range: public std::exception {
        public:
            virtual const char* what() const throw() { return "index out of range";}
    };
};

#endif
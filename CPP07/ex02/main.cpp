
#include "Array.hpp"

#define SIZE 10

int main( void )
{
    std::cout << "-----------------------------------------------------" << std::endl;
    Array< float > test;

    Array< int > intVoid ( void );
    Array< int > intArray( SIZE );
    Array< int > intArray2( SIZE );
    Array< int > intArray3( 1 );

    for (int i = 0; i < SIZE; ++i) {
        intArray[i] = i;
    }
    intArray2 = intArray;
    intArray3[0] = 258;
    for (int i = 0; i < SIZE; ++i) {
        std::cout << intArray[i] << " ";
    }
    std::cout << std::endl;
    for (int i = 0; i < SIZE; ++i) {
        std::cout << intArray2[i] << " ";
    }
    std::cout << std::endl;
    std::cout << intArray3[0] << std::endl;
    
    try {
        std::cout << intArray[0] << std::endl;
        std::cout << intArray[100] << std::endl;
    } catch ( Array< int >::Out_Of_Range& e ) {
        std::cout << "Error: " << e.what() << std::endl;
    }
    std::cout << "-----------------------------------------------------" << std::endl;

    return ( 0 );
}

#include "Array.hpp"

#define SIZE 10

int main( void )
{
    std::cout << "-----------------------------------------------------" << std::endl;

    Array< float > test;

    Array< int > intArray( SIZE );
    Array< int > intArray2( SIZE - 5 );

    //std::cout << intArray << std::endl;


    std::cout << "-----------------------------------------------------" << std::endl;

    return ( 0 );
}
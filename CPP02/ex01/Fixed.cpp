#include "Fixed.hpp"

const int value = 8;
Fixed::Fixed(void){std::cout << "fixed created" << std::endl;}
Fixed::~Fixed(void){std::cout << "fixed deleted" << std::endl;}
Fixed::Fixed(const int n)
{
    nb = n << value;
    std::cout << "int constructed" << std::endl;
}

Fixed::Fixed(const float n)
{
    nb = round(n * (1 << value));
    std::cout << "float constructed" << std::endl;
}



Fixed &Fixed::operator=(const Fixed &n)
{
    std::cout << "operator" << std::endl;
    if(this != &n)
        this->nb = n.getRawbits();
    return *this;
}

int Fixed::getRawbits(void) const 
{
    std::cout << "get raw" << std::endl;
    return this->nb;
}

void Fixed::setRawbits(int const raw)
{
    std::cout << "set raw" << std::endl;
    this->nb = raw;
}

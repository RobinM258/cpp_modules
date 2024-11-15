#include "Converter.hpp"

int main (int ac, char **av)
{
    if(ac != 2)
    {
        std::cout << "Wrong arguments" << std::endl;
        return 1;
    }
    ScalarConverter::Scalarconverter(av[1]);

    return 0;
}
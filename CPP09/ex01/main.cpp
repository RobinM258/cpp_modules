#include "RPN.hpp"

int main (int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Error" << std::endl;
        return 1;
    }
    Rpn test;
    test.calculate(av[1]);
    return 0;
}
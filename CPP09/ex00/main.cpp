#include "BitcoinExchange.hpp"

int main (int ac, char **av)
{
    (void)ac;
    if (ac < 2)
    {
        std::cout << "Error: could not open file" << std::endl;
        return 1;
    }
    BitcoinExchange t(av[1]);
    return 0;
}
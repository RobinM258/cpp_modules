#include "BitcoinExchange.hpp"

int main (int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Wrong number of arguments" << std::endl;
        return 1;
    }
    else 
        BitcoinExchange btc(av[1]);
    return 0;
}
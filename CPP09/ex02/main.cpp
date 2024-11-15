#include "PmergeMe.hpp"

int main (int ac, char **av)
{
    if (ac < 2)
    {
        std::cout << "Wrong arguments" << std::endl;
        return 0;
    } 
    PmergeMe test(ac, av);
    
    return 0;
}
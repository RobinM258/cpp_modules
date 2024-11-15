#include "PmergeMe.hpp"

PmergeMe::PmergeMe(int ac, char **av) {
    std::cout << "PmergeMe Begin" << std::endl;
    for(int i = 1; i < ac; i++)
    {
        for (int r = 0; r < (int)strlen((const char *)av[i]); r++)
        {
            if (!std::isdigit(av[i][r]))
            {
                std::cout << "Wrong arguments" << av[i][r] << std::endl;
                return;
            }
        }
        char **nul = NULL;
        long nb = strtol(av[i], nul, 10);
        _vect.push_back(nb);
        _lst.push_back(nb);
    }
    std::cout << "After :" << std::endl;
    display(this->_lst);
    display(this->_vect);
    sort(this->_lst);
    sort(this->_vect);
}
PmergeMe::~PmergeMe(void) {}
PmergeMe::PmergeMe(const PmergeMe &src)
{
    *this = src;
}

PmergeMe &PmergeMe::operator=( const PmergeMe &ref ) {
    (void)ref; 
    return *this;
}


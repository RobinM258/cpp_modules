#include "PmergeMe.hpp"

PmergeMe::PmergeMe(int ac, char **av) {
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
    display(_vect);
    std::vector<std::vector<int> > output = TransformDouble(_vect);
    std::vector<int> small;
    std::vector<int> Large;

    Separate(output, small, Large);

    display(small);
    display(Large);
}

void PmergeMe::Separate(const std::vector<std::vector<int> > & groups, std::vector<int>& Small, std::vector<int>& Large){
    int min;
    int max;
    for (size_t i = 0; i < groups.size(); ++i){


        if (groups[0] > groups[1]){
            min = groups[i][1];
            max = groups[i][0];
        }
        else {
            min = groups[i][0];
            max = groups[i][1];
        }
        if (groups[i].size() == 1)
            Small.push_back(min);
        else {
            Small.push_back(min);
            Large.push_back(max);
        }
    }
}
std::vector<std::vector<int> > PmergeMe::TransformDouble(const std::vector<int>& input){
    std::vector<std::vector<int> > result;
    for (size_t i = 0; i < input.size(); i += 2) {
        std::vector<int> group;
        group.push_back(input[i]);
        if (i + 1 < input.size()) {
            group.push_back(input[i + 1]);
        }
        result.push_back(group);
    }
    return result;
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

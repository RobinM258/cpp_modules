#include "PmergeMe.hpp"
#include <algorithm>
#include <unistd.h>

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
    
    std::vector<std::vector<int> > output = Separate(TransformDouble(_vect));
    //SortTab(output[0], output[1]);
    sort(output);
}


std::vector<int> PmergeMe::jacobsthal(int size) {
    std::vector<int> indices;
    int a = 0; 
    int b = 1;
    int next = 0;
    int i = 0;
    indices.push_back(0);
    while (b < size)
    {
        next = b + 2 * a;
        indices.push_back(next);
        i = b + 1;
        while (i < next)
        {
            indices.push_back(i);
            i++;
        }
        a = b;
        b = next;
    }
    return indices;
}

std::vector<int> PmergeMe::sort(std::vector<std::vector<int> > & output)
{
    std::vector<int> big = output[1];
    int nb;
    std::cout << "Nouvelle recurssion" << std::endl;
    display(output[0]);
    display(output[1]);
    if (output[0].size() > 2)
    {

        output = Separate(TransformDouble(output[0]));
        sort(output);
    }
    std::cout << "Vite fait" << std::endl;
    std::cout << output[0][0] << " " << output[0][1] << " " <<  output[0].size() << std::endl;
    if (output[0].size() <= 2 && output[0][1] < output[0][0])
    {
        nb = output[0][0];
        output[0][0] = output[0][1];
        output[0][1] = nb;
    }
    output[0] = SortTab(output[0], big);
    display(output[0]);
    return output[0];
}

std::vector<int> PmergeMe::SortTab(std::vector<int> Small, std::vector<int> Large)
{
    std::vector<int> NewSmall = Small;
    size_t i = 0;
    while (i < Large.size())
    {
        std::vector<int>::iterator pos = std::lower_bound(NewSmall.begin(), NewSmall.end(), Large[i]);
        NewSmall.insert(pos, Large[i]);
        i++;
    }
    return NewSmall;
}

std::vector<std::vector<int> > PmergeMe::Separate(const std::vector<std::vector<int> > & groups){
    int min;
    int max;
    std::vector<int> Small;
    std::vector<int> Large;
    std::vector<std::vector<int> > result;
    for (size_t i = 0; i < groups.size(); ++i){


        if (groups[i][0] > groups[i][1]){
            min = groups[i][1];
            max = groups[i][0];
        }
        else {
            min = groups[i][0];
            max = groups[i][1];
        }
        if (groups[i].size() == 1)
            Small.push_back(groups[i][0]);
        else {
            Small.push_back(min);
            Large.push_back(max);
        }
    }
    result.push_back(Small);
    result.push_back(Large);
    return result;
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

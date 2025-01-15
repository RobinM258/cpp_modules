#include "PmergeMe.hpp"
#include <algorithm>
#include <unistd.h>
#include <sys/time.h>

PmergeMe::PmergeMe(int ac, char **av) {
    for(int i = 1; i < ac; i++)
    {
        for (int r = 0; r < (int)strlen((const char *)av[i]); r++)
        {
            if (!std::isdigit(av[i][r]))
            {
                std::cout << "Wrong arguments " << av[i][r] << std::endl;
                return;
            }
        }
        char **nul = NULL;
        long nb = strtol(av[i], nul, 10);
        if (nb > 2147483647)
        {
            std::cout << "The arguments must be an integer " << nb << std::endl;
            return;
        }
        _vect.push_back(nb);
        _deque.push_back(nb);
    }
    std::cout << "Before : ";
    display(_vect);
    //display(_deque);
    timeval tv;
    timeval tv2;
    gettimeofday(&tv, NULL);
    std::vector<std::vector<int> > output = SeparateVector(TransformDoubleVector(_vect));
    std::vector<int> result;
    result = sortVector(output);
    gettimeofday(&tv2, NULL);

    timeval tv3;
    timeval tv4;
    gettimeofday(&tv3, NULL);
    std::deque<std::deque<int> > outputDeque = SeparateDeque(TransformDoubleDeque(_deque));
    std::deque<int> resultdeque;
    resultdeque = sortDeque(outputDeque);
    gettimeofday(&tv4, NULL);

    std::cout << "After  : ";
    //display(result);
    display(resultdeque);
    std::cout << "Time to process a range of " << _vect.size() << " elements with std::vector : " << tv2.tv_usec - tv.tv_usec << " μs" << std::endl;
    std::cout << "Time to process a range of " << _vect.size() << " elements with std::deque : " << tv4.tv_usec - tv3.tv_usec << " μs" << std::endl;
}


std::vector<int> PmergeMe::jacobsthalVector(int size) {
    std::vector<int> indices;
    int a = 0; 
    int b = 1;
    int next = 0;
    int i = 0;
    indices.push_back(0);
    while (b < size)
    {
        next = b + 2 * a;
        if (next > size)
        {
            while (i < size)
            {
                i++;
                indices.push_back(i);
            }
            break;
        }
        if (next != size)
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

std::vector<int> PmergeMe::sortVector(std::vector<std::vector<int> > & output)
{
    std::vector<int> big = output[1];
    int nb;
    if (output[0].size() == 1 && output[1].size() == 1)
    {
        output[0].push_back(output[1][0]);
        return output[0];
    }
    if (output[0].size() == 1)
        return output[0];
    if (output[0].size() > 2)
    {
        output = SeparateVector(TransformDoubleVector(output[0]));
        sortVector(output);
    }
    if (output[0].size() <= 2 && output[0][1] < output[0][0])
    {
        nb = output[0][0];
        output[0][0] = output[0][1];
        output[0][1] = nb;
    }
    output[0] = SortTabVector(output[0], big);
    return output[0];
}

std::vector<int> PmergeMe::SortTabVector(std::vector<int> Small, std::vector<int> Large)
{
    std::vector<int> NewSmall = Small;
    std::vector<int> jacob = jacobsthalVector(Large.size());
    size_t i = 0;
    while (i < Large.size())
    {   
        std::vector<int>::iterator pos = std::lower_bound(NewSmall.begin(), NewSmall.end(), Large[jacob[i]]);
        NewSmall.insert(pos, Large[jacob[i]]);
        i++;
    }
    return NewSmall;
}

std::vector<std::vector<int> > PmergeMe::SeparateVector(const std::vector<std::vector<int> > & groups){
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



std::vector<std::vector<int> > PmergeMe::TransformDoubleVector(const std::vector<int>& input){
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

std::deque<int> PmergeMe::jacobsthalDeque(int size) {
    std::deque<int> indices;
    int a = 0; 
    int b = 1;
    int next = 0;
    int i = 0;
    indices.push_back(0);
    while (b < size)
    {
        next = b + 2 * a;
        if (next > size)
        {
            while (i < size)
            {
                i++;
                indices.push_back(i);
            }
            break;
        }
        if (next != size)
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

std::deque<int> PmergeMe::sortDeque(std::deque<std::deque<int> > & output)
{
    std::deque<int> big = output[1];
    int nb;
    if (output[0].size() == 1 && output[1].size() == 1)
    {
        output[0].push_back(output[1][0]);
        return output[0];
    }
    if (output[0].size() == 1)
        return output[0];
    if (output[0].size() > 2)
    {
        output = SeparateDeque(TransformDoubleDeque(output[0]));
        sortDeque(output);
    }
    if (output[0].size() <= 2 && output[0][1] < output[0][0])
    {
        nb = output[0][0];
        output[0][0] = output[0][1];
        output[0][1] = nb;
    }
    output[0] = SortTabDeque(output[0], big);
    return output[0];
}

std::deque<int> PmergeMe::SortTabDeque(std::deque<int> Small, std::deque<int> Large)
{
    std::deque<int> NewSmall = Small;
    std::deque<int> jacob = jacobsthalDeque(Large.size());
    size_t i = 0;
    while (i < Large.size())
    {   
        std::deque<int>::iterator pos = std::lower_bound(NewSmall.begin(), NewSmall.end(), Large[jacob[i]]);
        NewSmall.insert(pos, Large[jacob[i]]);
        i++;
    }
    return NewSmall;
}

std::deque<std::deque<int> > PmergeMe::SeparateDeque(const std::deque<std::deque<int> > & groups){
    int min;
    int max;
    std::deque<int> Small;
    std::deque<int> Large;
    std::deque<std::deque<int> > result;
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



std::deque<std::deque<int> > PmergeMe::TransformDoubleDeque(const std::deque<int>& input){
    std::deque<std::deque<int> > result;
    for (size_t i = 0; i < input.size(); i += 2) {
        std::deque<int> group;
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

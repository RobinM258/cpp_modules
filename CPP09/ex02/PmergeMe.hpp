#ifndef MERGE
#define MERGE

#include <vector>
#include <list>
#include <iostream>
#include <string.h>
#include <cctype>
#include <stdlib.h> 

class PmergeMe
{
    private:
        std::vector<int>    _vect;
        std::list<int>      _lst;
    public:
        PmergeMe(int ac, char **av);
        ~PmergeMe(void);
        PmergeMe(const PmergeMe & );
        PmergeMe & operator=(const PmergeMe &);

        template <typename T>
        void display(T &);

        template <typename T>
        T sort(T &);
};

template<typename T>
void PmergeMe::display(T &src)
{
    typename T::iterator it;

    for(it = src.begin(); it != src.end(); it++) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

template<typename T>
T PmergeMe::sort(T &src)
{
    if (src.size() <= 1)
        return src;
    typename T::iterator it = src.begin();
    typename T::iterator it_next = it;
    T ret;
    it_next++;
    if (*it > *it_next) {
        ret.push_back(*it_next);
        ret.push_back(*it);
    }
    else {
        ret.push_back(*it);
        ret.push_back(*it_next);
    }
    display(ret);
    return ret;
}

#endif
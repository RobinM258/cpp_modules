#include <vector>
#include <deque>
#include <iostream>
#include <string.h>
#include <cctype>
#include <stdlib.h> 

class PmergeMe
{
    private:
        std::vector<int>    _vect;
        std::deque<int>      _deque;
    public:
        PmergeMe(int ac, char **av);
        ~PmergeMe(void);
        PmergeMe(const PmergeMe & );
        PmergeMe & operator=(const PmergeMe &);

        template <typename T>
        void display(T &);

        std::vector<int> jacobsthalVector(int);
        std::vector<std::vector<int> > TransformDoubleVector(const std::vector<int>& input);
        std::vector<std::vector<int> > SeparateVector(const std::vector<std::vector<int> > & groups);
        std::vector<int> sortVector(std::vector<std::vector<int> > & output);
        std::vector<int> SortTabVector(std::vector<int> small, std::vector<int> large);

        std::deque<int> jacobsthalDeque(int);
        std::deque<std::deque<int> > TransformDoubleDeque(const std::deque<int>& input);
        std::deque<std::deque<int> > SeparateDeque(const std::deque<std::deque<int> > & groups);
        std::deque<int> sortDeque(std::deque<std::deque<int> > & output);
        std::deque<int> SortTabDeque(std::deque<int> small, std::deque<int> large);


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
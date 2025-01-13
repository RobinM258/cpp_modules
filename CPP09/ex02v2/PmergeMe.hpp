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

        std::vector<int> jacobsthal(int);
        std::vector<std::vector<int> > TransformDouble(const std::vector<int>& input);
        std::vector<std::vector<int> > Separate(const std::vector<std::vector<int> > & groups);
        std::vector<int> sort(std::vector<std::vector<int> > & output);
        std::vector<int> SortTab(std::vector<int> small, std::vector<int> large);


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
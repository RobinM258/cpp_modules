#ifndef MUTANT
#define MUTANT

#include <iostream>
#include <stack>
#include <list>

template<typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
    public:
        MutantStack(void) : std::stack<T, Container>() {}
        ~MutantStack(void) {}

        typedef typename Container::iterator iterator;

        iterator begin(void)
        {
            return this->c.begin();
        }
        iterator end(void)
        {
            return this->c.end();
        }

};

#endif
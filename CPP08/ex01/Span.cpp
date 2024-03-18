#include "Span.hpp"

Span::Span(unsigned int i) { 
    len = i;
    index = 1;
    }
Span::~Span(void) {}

void Span::addNumber(int nb)
{
    if (index > len)
        throw Max_tab_exception();
    array.push_back(nb);
    index++;
}
void Span::fillList( std::list<int>::iterator start, std::list<int>::iterator end )
{
    if (index > len)
        throw Max_tab_exception();
    array.insert( array.end(), start, end );
}

int Span::shortestSpan(void)
{
    std::list<int>::iterator it;
    std::list<int>::iterator itcpy;
    int shortest = -1;
    for (it = array.begin(); it != array.end(); it++)
    {
        itcpy = it;
        while (++itcpy != array.end())
        {
            if (shortest == -1)
                shortest = std::abs(*it - *itcpy);
            else if (shortest > std::abs(*it - *itcpy))
                shortest = std::abs(*it - *itcpy);
        }
    }
    if (shortest < 0)
        throw Vector_lenght();
    return shortest;
}

int Span::longestSpan(void)
{
    std::list<int>::iterator it;
    std::list<int>::iterator itcpy;
    int longest = -1;
    for (it = array.begin(); it != array.end(); it++)
    {
        itcpy = it;
        while (++itcpy != array.end())
        {
            if (longest == -1)
                longest = std::abs(*it - *itcpy);
            else if (longest < std::abs(*it - *itcpy))
                longest = std::abs(*it - *itcpy);
        }
    }
    if (longest <= 0)
        throw Vector_lenght();
    return longest;
}

std::list<int> Span::getList( void ) const {
    return (array);
}
#ifndef SPAN
#define SPAN

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

class Max_tab_exception : public std::exception
{
    public:
		char const * what() const throw()
		{
			return "List limit reached";
		}
};
class Vector_lenght : public std::exception
{
    public:
		char const * what() const throw()
		{
			return "List lenght is one";
		}
};
class Empty_vector : public std::exception
{
    public:
		char const * what() const throw()
		{
			return "Empty list";
		}
};

class Span 
{
    private:
        std::list<int> array;
        int len;
        int index;
    public:
        Span(unsigned int );
        ~Span();
        void addNumber(int i);
        int shortestSpan(void);
        int longestSpan(void);
        void fillList( std::list<int>::iterator start, std::list<int>::iterator end );
        std::list<int> getList( void ) const;

};
#endif
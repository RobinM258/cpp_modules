#ifndef SPAN
#define SPAN

#include <iostream>
#include <vector>
#include <algorithm>

class Max_tab_exception : public std::exception
{
    public:
		char const * what() const throw()
		{
			return "Vector limit reached";
		}
};

class Span 
{
    private:
        std::vector<int> array;
        int len;
        int index;
    public:
        Span(unsigned int );
        ~Span();
        void addNumber(int i);

};
#endif
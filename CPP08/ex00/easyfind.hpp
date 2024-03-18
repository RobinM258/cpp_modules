#ifndef EASY
#define EASY

#include <iostream>
#include <vector>
#include <algorithm> 

class occurence_not_found : public std::exception
{
    public:
		char const * what() const throw()
		{
			return "Could not find int in vector";
		}
};
template<typename T>
void easyfind( T& a, int b)
{
    typename T::iterator it;
    if((std::find(a.begin(), a.end(), b) == a.end()))
        throw occurence_not_found();
    else 
        std::cout << "Find occurence" << std::endl;


}

#endif
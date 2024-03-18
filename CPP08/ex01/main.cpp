#include "Span.hpp"

int main(void)
{

    try
    {
        int i = 0;
        Span a = Span(18);
        Span b = Span(28);
        a.addNumber(5);
        a.addNumber(2);
        a.addNumber(15);
        std::cout << a.shortestSpan() << std::endl;
        std::cout << a.longestSpan() << std::endl;
        while (i < 15)
        {
            a.addNumber(i);
            i++;
        }
        std::cout << a.longestSpan() << std::endl;

        std::cout << a.shortestSpan() << std::endl;

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try {
        std::list<int>    l( 10000 );
        std::srand( time ( NULL ) );
        std::generate( l.begin(), l.end(), std::rand );
    
        Span aaa( l.size() );

        aaa.fillList( l.begin(), l.end() );

        std::cout << aaa.longestSpan() << std::endl;
        std::cout << aaa.shortestSpan() << std::endl;
        
    } catch ( std::exception& e ) {
        std::cout << e.what() << std::endl; 
    }
    return 0;
}
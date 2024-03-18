#include "Span.hpp"

int main(void)
{

    try
    {
        Span a = Span(2);
        a.addNumber(10);
        a.addNumber(10);
        a.addNumber(10);
        a.addNumber(10);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}
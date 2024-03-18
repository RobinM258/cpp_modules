#include "Span.hpp"

Span::Span(unsigned int i) { 
    len = i;
    index = 0;
    }
Span::~Span(void) {}

void Span::addNumber(int nb)
{
    if (index > len)
        throw Max_tab_exception();
    array.push_back(nb);
    index++;
}

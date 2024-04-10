#include "PmergeMe.hpp"

Pmerge::Pmerge(void) {}
Pmerge::~Pmerge(void) {}
Pmerge::Pmerge(const Pmerge &src)
{
    *this = src;
}

Pmerge &Pmerge::operator=( const Pmerge &ref ) {
    (void)ref;
    return *this;
}

Pmerge
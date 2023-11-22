#ifndef MATERIASOURCE
#define MATERIASOURCE

#include <iostream>
#include "AMateria.hpp"

class IMaterialSource {
    public:
        virtual ~IMaterialSource();
        virtual void learnMateria(AMateria*) = 0;
        virtual AMateria* createMateria(std::string const & type) = 0;
    private:
};
#endif 
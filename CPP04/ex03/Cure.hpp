#ifndef CURE
#define CURE

#include "AMateria.hpp"

class Cure :public AMateria
{
    public:
        Cure();
        ~Cure();
        Cure(Cure const &);
        Cure & operator=(Cure const &);
        std::string const & getType() const;
        AMateria* clone() const;
        void use (ICharacter& target);

};
#endif
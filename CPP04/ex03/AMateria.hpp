#ifndef AMATERIA
#define AMATERIA

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
    protected:
        std::string _type;
    public:
        AMateria();
        virtual ~AMateria();
        AMateria(std::string const & type);
        AMateria(AMateria const & ref);
        std::string const & getType() const;

        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};
#endif
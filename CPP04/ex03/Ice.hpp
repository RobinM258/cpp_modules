#ifndef ICE
#define ICE

#include "AMateria.hpp"

class Ice :public AMateria
{
    public:
        Ice();
        ~Ice();
        Ice(Ice const &);
        Ice & operator=(Ice const &);
        std::string const & getType() const;
        Ice *clone() const;
        void use(ICharacter& target);
    private:
        std::string _type;

};
#endif
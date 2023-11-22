#ifndef CHARACTER
#define CHARACTER

#include "AMateria.hpp"

class Character {
    public:
        Character(std::string name);
        Character(Character const & ref);
        ~Character();
        Character & operator=(Character const &ref);
        std::string const & getName() const;
    private:
};
#endif
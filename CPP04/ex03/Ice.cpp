#include "Ice.hpp"

Ice::Ice() : AMateria("ice"){std::cout << "ice constructor created" << std::endl;}
Ice::~Ice(){std::cout << "ice constructor deleted" << std::endl;}

Ice::Ice(Ice const & ref): AMateria("ice")
{
    *this = ref;
}
Ice& Ice::operator=( const Ice& r)
{
    if (this != &r)
        _type = r._type;
    return *this;
}

std::string const & Ice::getType(void) const
{
    return _type;
}

AMateria *Ice::clone() const
{
    Ice *cl = new Ice;
    return cl;
}

void Ice::use(ICharacter& target)
{
    std::string name_t = target.getName();
    std::cout << "Shoot with an ice bolt at " << name_t << std::endl;
}
#include "Cure.hpp"

Cure::Cure() : AMateria("cure"){std::cout << "Cure constructor created" << std::endl;}
Cure::~Cure(){std::cout << "Cure constructor deleted" << std::endl;}

Cure::Cure(Cure const & ref): AMateria("cure")
{
    *this = ref;
}
Cure& Cure::operator=( const Cure& r)
{
    std::cout << "operator" << r.getType() << std::endl;
    if (this != &r)
        _type = r._type;
    return *this;
}

AMateria* Cure::clone() const
{
    Cure *cl = new Cure;
    return cl;
}

void use(ICharacter& target)
{
    std::string name_t = target.getName();
    std::cout << "Heals " << name_t << std::endl;
}
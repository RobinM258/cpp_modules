#include "AMateria.hpp"

AMateria::AMateria(void){std::cout << "AMateria constructor created" << std::endl;}
AMateria::~AMateria(void){std::cout << "AMateria constructor deleted" << std::endl;}

AMateria::AMateria(AMateria const & ref){
    *this = ref;
}

std::string const & AMateria::getType(void) const 
{
    return  (this->_type);
}

AMateria* AMateria::clone() const
{
    return (AMateria*)this;
}
void AMateria::use(ICharacter& target)
{
    std::cout << "AMateria " << _type << " used on " << target.getName() << std::endl;
}


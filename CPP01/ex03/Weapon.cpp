
#include "Weapon.hpp"

Weapon::Weapon (void){ std::cout << "type create" << std::endl;}
Weapon::~Weapon (void){}

std::string Weapon::getType(void) const { return( type ); }

void Weapon::setType(std::string newType)
{
    type = newType;
}

Weapon Weapon::operator=(const Weapon &weapon){
	type = weapon.type;
	return ( *this );
}
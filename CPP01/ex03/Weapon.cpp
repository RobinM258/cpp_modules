#include "Weapon.hpp"

Weapon::Weapon( void ){ }

Weapon::Weapon( std::string type ): type(type){ std::cout << "Weapon " << type << GREEN << " created" << WHITE << std::endl; }

Weapon Weapon::operator=(const Weapon &weapon){
	type = weapon.type;
	return ( *this );
}

Weapon::~Weapon(){ std::cout << "Weapon " << type << RED << " deleted" << WHITE << std::endl; }

std::string Weapon::getType(void) const { return ( type ); }

void	Weapon::setType( std::string newType ){
	type = newType;
}
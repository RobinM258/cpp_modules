#include "Weapon.hpp"

Weapon::Weapon( void ){ }

Weapon::Weapon( std::string type ): type(type){ std::cout << "Weapon " << type << " created" << std::endl; }

Weapon::~Weapon(){ std::cout << "Weapon " << type << " deleted" << std::endl; }

std::string Weapon::getType(void) const { return ( this->type ); }

void	Weapon::setType( std::string newType ){
	this->type = newType;
}
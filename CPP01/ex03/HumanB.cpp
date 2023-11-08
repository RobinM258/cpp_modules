#include "HumanB.hpp"

HumanB::HumanB( Weapon &weapon, std::string name ): weapon(&weapon),name(name){
	std::cout << "HumanB " << name << " with " << weapon.getType() << " created" << std::endl;
}

HumanB::HumanB( std::string newName ){
	name = newName;
	std::cout << "HumanB " << name << " with no weapon created" << std::endl;
}

HumanB::~HumanB(){ std::cout << "HumanB " << name << " with " << weapon->getType() << " deleted" <<  std::endl; }

void	HumanB::attack( void ){ 
	if (!(this->weapon))
		std::cout << name << " cannot attacks because he does not have weapons" << std::endl;
	else
		std::cout << name << " attacks with his " << weapon->getType() << std::endl; 
}

void	HumanB::setWeapon( Weapon &newWeapon ){
	this->weapon = &newWeapon;
	std::cout << name << " now have a " << weapon->getType() << std::endl;
}
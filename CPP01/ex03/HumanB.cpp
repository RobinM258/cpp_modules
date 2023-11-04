#include "HumanB.hpp"

HumanB::HumanB( Weapon &weapon, std::string name ): weapon(&weapon),name(name){
	std::cout << "HumanB " << name << " with " << weapon.getType() << GREEN << " created" << WHITE << std::endl;
}

HumanB::HumanB( std::string newName ){
	name = newName;
	std::cout << "HumanB " << name << " with no weapon" << GREEN << " created" << WHITE << std::endl;
}

HumanB HumanB::operator=(const HumanB &human){
	weapon = human.weapon;
	name = human.name;
	return ( *this );
}

HumanB::~HumanB(){ std::cout << "HumanB " << name << " with " << weapon->getType() << RED << " deleted" << WHITE << std::endl; }

void	HumanB::attack( void ){ 
	if (weapon->getType().empty())
		std::cout << name << " cannot attacks because he does not have weapons" << std::endl;
	else
		std::cout << name << " attacks with his " << weapon->getType() << std::endl; 
}

void	HumanB::setWeapon( Weapon &newWeapon ){
	weapon = &newWeapon;
	std::cout << name << " now have a " << weapon->getType() << std::endl;
}
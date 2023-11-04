#include "HumanA.hpp"

HumanA::HumanA( Weapon &weapon, std::string name ): weapon(weapon),name(name){ std::cout << "HumanA " << name << " with " << weapon.getType() << GREEN << " created" << WHITE << std::endl; }

HumanA HumanA::operator=(const HumanA &human){
	weapon = human.weapon;
	name = human.name;
	return ( *this );
}

HumanA::~HumanA(){ std::cout << "HumanA " << name << " with " << weapon.getType() << RED << " deleted" << WHITE << std::endl; }

void	HumanA::attack( void ){ std::cout << name << " attacks with his " << weapon.getType() << std::endl; }

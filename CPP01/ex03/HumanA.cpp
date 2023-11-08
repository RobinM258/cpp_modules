#include "HumanA.hpp"

HumanA::HumanA( Weapon &weapon, std::string name ): weapon(weapon),name(name){ std::cout << "HumanA " << name << " with " << weapon.getType() << " created" << std::endl; }

HumanA::~HumanA(){ std::cout << "HumanA " << name << " with " << weapon.getType() << " deleted" << std::endl; }

void	HumanA::attack( void ){ std::cout << name << " attacks with his " << weapon.getType() << std::endl; }

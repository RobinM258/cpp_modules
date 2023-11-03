#include "HumanA.hpp"

HumanA::HumanA(void){}
HumanA::~HumanA(void){}
HumanA::HumanA(std::string names, std::string Weapons){ name = names; weapon = Weapons; }
HumanA::HumanA(std::string names){name = names;}

void HumanA::attack(void)
{
    std::cout << name << " attacks with their " << weapon << std::endl;
}

HumanA HumanA::operator=(const HumanA &weapon){
	type = weapon.type;
	return ( *this );
}
void HumanA::setWeapon(Weapon &nWeapon)
{
    weapon = nWeapon.getType();
}
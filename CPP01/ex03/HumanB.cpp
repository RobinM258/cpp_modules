#include "HumanB.hpp"


HumanB::HumanB(void){}
HumanB::~HumanB(void){}
HumanB::HumanB(std::string names, std::string Weapons){ name = names; weapon = Weapons; }
HumanB::HumanB(std::string names){name = names;}

void HumanB::attack(void)
{
    std::cout << name << " attacks with their " << weapon << std::endl;
}

void HumanB::setWeapon(Weapon &nWeapon)
{
    weapon = nWeapon.getType();
}
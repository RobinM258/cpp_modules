#include "FragTrap.hpp"

FragTrap::FragTrap (std::string nm): ClapTrap(nm){ name = nm; hit_Points = 100; energy_Points = 100; attack_Damage = 30; std::cout << "FragTrap " << name << " created" << std::endl;}
FragTrap::~FragTrap (void){ std::cout << "FragTrap deleted" << std::endl;}

FragTrap::FragTrap(const FragTrap &nm): ClapTrap(nm){std::cout << "FragTrap copy created" << std::endl;}
FragTrap &FragTrap::operator=(const FragTrap &n)
{
    std::cout << "asignation" << std::endl;
    if (this != &n)
    {
        this->name = n.getName();
        this->energy_Points = n.getEp();
        this->hit_Points = n.getHp();
        this->attack_Damage = n.getDmg();
    }
    return *this;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "ScavTrap " << name << " asked for an high five." << std::endl;
}

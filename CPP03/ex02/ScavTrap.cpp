#include "ScavTrap.hpp"

ScavTrap::ScavTrap (std::string nm): ClapTrap(nm){ name = nm; hit_Points = 100; energy_Points = 50; attack_Damage = 20; std::cout << "ScavTrap " << name << " created" << std::endl;}
ScavTrap::~ScavTrap (void){ std::cout << "ScavTrap deleted" << std::endl;}

ScavTrap::ScavTrap(const ScavTrap &nm): ClapTrap(nm){std::cout << "Scavtrap copy created" << std::endl;}
ScavTrap &ScavTrap::operator=(const ScavTrap &n)
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
void ScavTrap::attack(const std::string& target)
{
    if (hit_Points == 0)
    {
        std::cout << "ClapTrap " << name << " does not have enought hit points." << std::endl;
        return ;
    }
    if (energy_Points < 1)
    {
        std::cout << "ScavTrap " << name << " does not have enought energy points." << std::endl;
        return ;
    }
    energy_Points--;
    std::cout << "ScavTrap " << name << " attacks " << target << " causing " << attack_Damage << " points of damage!" << std::endl;
}
void ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap " << name << " enter gate keeper mode." << std::endl;
}


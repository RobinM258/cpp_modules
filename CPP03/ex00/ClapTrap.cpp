#include "ClapTrap.hpp"

ClapTrap::ClapTrap (void){ hit_Points = 10; energy_Points = 10; attack_Damage = 0; std::cout << "Claptrap created" << std::endl;}
ClapTrap::~ClapTrap (void){ std::cout << "Claptrap deleted" << std::endl;}


ClapTrap &ClapTrap::operator=(const ClapTrap &n)
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
void ClapTrap::attack(const std::string& target)
{
    if (energy_Points < 1)
    {
        std::cout << "ClapTrap" << name << "does not have enought energy points." << std::endl;
        return ;
    }
    energy_Points--;
    std::cout << "ClapTrap" << name << "attacks" << target << " causing" << attack_Damage << "points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (energy_Points < 1)
    {
        std::cout << "ClapTrap" << name << "does not have enought energy points." << std::endl;
        return ;
    }
    energy_Points--;
    hit_Points += amount;
   std::cout << "ClapTrap" << name << "have been repaired by " << amount << "points."<< std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (hit_Points == 0) {
        std::cout << "ClapTrap" << name << "is Already out of order." << std::endl;
    }
    if (hit_Points < amount)
        hit_Points = 0;
    else
        hit_Points -= amount;
    std::cout << "ClapTrap" << name << "have taken" << amount << "damages."<< std::endl;
}

unsigned int ClapTrap::getDmg() const { return attack_Damage;}
unsigned int ClapTrap::getEp() const { return energy_Points;}
unsigned int ClapTrap::getHp() const { return hit_Points;}
std::string ClapTrap::getName() const { return name;}
std::ostream &operator<<(std::ostream& os, const ClapTrap &c)
{
    os << c.getName() << "damage" << c.getDmg() << "hit_Points" << c.getHp() << "energy points " << c.getEp() << std::endl;
    return os;
}
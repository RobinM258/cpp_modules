#ifndef CLAP
#define CLAP

#include <iostream>
class ClapTrap {


protected:
    std::string name;
    unsigned int hit_Points;
    unsigned int energy_Points;
    unsigned int attack_Damage;

public:
    ClapTrap(std::string nm);
    ~ClapTrap(void);
    ClapTrap &operator=(const ClapTrap &);
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    unsigned int getDmg (void) const;
    unsigned int getHp (void) const;
    unsigned int getEp (void) const;
    std::string getName (void) const;

};

std::ostream& operator<<(std::ostream& os, const ClapTrap &c);

#endif 
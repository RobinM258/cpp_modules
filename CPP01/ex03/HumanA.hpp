
#ifndef HUMAN_A
#define HUMAN_A

#include "Weapon.hpp"

class HumanA
{
private:
    std::string weapon;
    std::string name;
public:
    HumanA(void);
    ~HumanA(void);
    HumanA(std::string name);
    HumanA(std::string name, std::string Weapons);
    HumanA	operator=( const HumanA & );
    void attack(void);
    void setWeapon(Weapon &nWeapon);
};
#endif
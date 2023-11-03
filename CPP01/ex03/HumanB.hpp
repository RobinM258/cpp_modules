
#ifndef HUMAN_B
#define HUMAN_B

#include "Weapon.hpp"

class HumanB
{
private:
    std::string weapon;
    std::string name;
public:
    HumanB(void);
    ~HumanB(void);
    HumanB(std::string name);
    HumanB(std::string name, std::string Weapons);
    void attack(void);
    void setWeapon(Weapon &nWeapon);
};
#endif
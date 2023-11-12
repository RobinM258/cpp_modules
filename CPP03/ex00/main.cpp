#include "ClapTrap.hpp"

int main() {
    ClapTrap cp("Kieron");
    ClapTrap cp2("Robin");

    std::cout << cp << std::endl;
    std::cout << cp2 << std::endl;
    cp.attack(cp2.getName());
    cp2.takeDamage(cp.getDmg());
    cp.attack(cp2.getName());
    cp2.takeDamage(cp.getDmg());
    cp.attack(cp2.getName());
    cp2.takeDamage(cp.getDmg());
    std::cout << cp << std::endl;
    std::cout << cp2 << std::endl;

    cp2.beRepaired(cp.getDmg());
    std::cout << cp << std::endl;
    std::cout << cp2 << std::endl;
    return 0;
}

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    ClapTrap cp("Kieron");
    ClapTrap cp2("Robin");
    ScavTrap st("Victor");
    FragTrap ft("David");

    std::cout << cp << std::endl;
    std::cout << st << std::endl;
    std::cout << ft << std::endl;
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
    st.guardGate();
    st.attack(cp.getName());
    cp.takeDamage(st.getDmg());
    cp.takeDamage(st.getDmg());
    cp.attack(st.getName());
    std::cout << cp << std::endl;
    std::cout << cp2 << std::endl;

    return 0;
}
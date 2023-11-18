#ifndef SCAVTRAP
#define SCAVTRAP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap{

private:
        ScavTrap(void);

public:
    ScavTrap(std::string nm);
    ScavTrap(const ScavTrap &);
    ~ScavTrap(void);
    ScavTrap &operator=(const ScavTrap &);
    void attack(const std::string& target);
    void guardGate(void);
};

#endif
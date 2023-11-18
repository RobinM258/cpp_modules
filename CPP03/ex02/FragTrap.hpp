#ifndef FRAGTRAP
#define FRAGTRAP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap{

private:
        FragTrap(void);
public:
    FragTrap(std::string nm);
    FragTrap(const FragTrap &);
    ~FragTrap(void);
    FragTrap &operator=(const FragTrap &);

    void highFivesGuys(void);
};

#endif
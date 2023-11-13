#ifndef FRAGTRAp
#define FRAGTRAp

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap{

private:
        FragTrap(void);
public:
    FragTrap(std::string nm);
    FragTrap(const FragTrap &);
    ~FragTrap(void);
    FragTrap &operator=(const FragTrap &);
    void attack(const std::string& target);
    void hightFivesGuys(void);
};

std::ostream& operator<<(std::ostream& os, const FragTrap &c);

#endif
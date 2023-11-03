#include "Zombie.hpp"

Zombie::Zombie(std::string &name): name(name) { std::cout << "Zombie {" << name << "} created" << std::endl ;}
Zombie::~Zombie(void) { std::cout << "Zombie {" << name << "} deleted" << std::endl ;}

Zombie &Zombie::operator=(const Zombie &z)
{
	this->name = z.name;
	return (*this);
}

void    Zombie::announce( void )
{
    std::cout << name << ": BraiiiiiiinnnnnnzzzzzZ" << std::endl;
}
#include "Zombie.h"

void randomChump( std::string name )
{
	Zombie c = Zombie(name);
	std::cout << name << " is a randomChump" << std::endl;
	c.announce();
}
#include "Zombie.h"

int main (void)
{
	Zombie *a = newZombie("Gilbert");
	a->announce();
	randomChump("Robert");
	Zombie *b = newZombie("Bertro");
	randomChump("Boris");
	b->announce();
	delete a;
	delete b;
}
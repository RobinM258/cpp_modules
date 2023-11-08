#include "Zombie.hpp"
Zombie *add_Zombie(int index, std::string name);
int main (void)
{

	Zombie *a = add_Zombie(15, "Kieron");
	Zombie *b = add_Zombie(15, "Robin");
	for (int i = 0; i < 15; i++)
		a[i].announce();
	b->announce();
	delete []a;
	delete []b;
	return 0;
}
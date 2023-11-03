#include "Zombie.hpp"

Zombie* add_Zombie(int index, std::string name)
{
	Zombie *z = new Zombie[index];
	for (int i = 0; i < index; i++)
		z[i].rename(name);
	return z;
}
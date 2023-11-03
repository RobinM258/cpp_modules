#include "Harl.hpp"
int main (void)
{
	Harl a = Harl();

	a.complain("ERROR");
	a.complain("DEBUG");
	a.complain("INFO");
	a.complain("WARNING");
	return 0;
}
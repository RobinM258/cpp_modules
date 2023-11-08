#ifndef HUMANSB
# define HUMANSB

# include "Weapon.hpp"

class HumanB{
	private:
		Weapon *weapon;
		std::string name;
		HumanB( void );

	public:
		HumanB( std::string name );
		HumanB( Weapon &weapon, std::string name );
		~HumanB( void );
		void	attack( void );
		void	setWeapon( Weapon &weapon );
};

#endif
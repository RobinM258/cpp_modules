#ifndef Demeter
# define Demeter

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
		HumanB operator=(const HumanB &);
		void	attack( void );
		void	setWeapon( Weapon &weapon );
};

#endif
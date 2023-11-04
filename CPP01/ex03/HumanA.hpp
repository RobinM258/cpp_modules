#ifndef ARES
# define ARES

# include "Weapon.hpp"

class HumanA{
	private:
		Weapon &weapon;
		std::string name;
		HumanA( void );

	public:
			HumanA( Weapon &weapon, std::string name );
			~HumanA( void );
			HumanA operator=( const HumanA & );
			void	attack( void );
};

#endif
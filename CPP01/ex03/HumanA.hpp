#ifndef HUMANA
# define HUMANA

# include "Weapon.hpp"

class HumanA{
	private:
		Weapon &weapon;
		std::string name;
		HumanA( void );

	public:
			HumanA( Weapon &weapon, std::string name );
			~HumanA( void );
			void	attack( void );
};

#endif
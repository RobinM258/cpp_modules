#ifndef Weapons
# define Weapons

# include <iostream>

class Weapon{
	private:
		std::string type;

	public:
		Weapon( void );
		Weapon( std::string type );
		~Weapon();
		std::string getType( void ) const;
		void	setType( std::string newtype );
};

#endif
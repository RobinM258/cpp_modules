#ifndef Apollon
# define Apollon

# include <iostream>
# define GREEN "\x1b[32m"
# define WHITE "\x1b[0m"
# define RED "\x1b[31m"

class Weapon{
	private:
		std::string type;

	public:
		Weapon( void );
		Weapon( std::string type );
		Weapon	operator=( const Weapon & );
		~Weapon();
		std::string getType( void ) const;
		void	setType( std::string newtype );
};

#endif
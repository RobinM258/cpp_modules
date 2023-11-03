
#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie(void);
		Zombie( std::string & );
		~Zombie(void);
		Zombie &operator=( const Zombie&);
		Zombie(const std::string &);
		void announce( void );
		void rename(std::string & );
};

#endif
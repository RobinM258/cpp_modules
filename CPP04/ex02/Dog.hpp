
#ifndef DOG
# define DOG

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
	private:
		std::string	type;
		Brain		*brain;
	public:
		Dog();
		~Dog();
		Dog(Dog & ref);
		Dog & operator=(Dog const & rhs);
		void makeSound() const;
		std::string getType( void ) const;
		Brain *getBrain( void ) const;
		void compareTo(Dog const & other_dog) const;
};

#endif
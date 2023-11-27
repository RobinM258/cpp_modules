
#ifndef CAT
# define CAT

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
	private:
		std::string	type;
		Brain		*brain;
	public:
		Cat();
		~Cat();
		Cat(Cat & ref);
		Cat & operator=(Cat const & rhs);
		void makeSound() const;
		std::string getType( void ) const;
		Brain *getBrain( void ) const;
		void compareTo(Cat const & other_cat) const;
};

#endif
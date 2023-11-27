#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat()
{
	this->type = "Cat";
	this->brain = new Brain;
	std::cout << "Constructor cat created" << std::endl;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Constructor cat deleted" << std::endl;
}

Cat::Cat(Cat & ref): Animal(ref)
{
	this->type = ref.getType();
	this->brain = new Brain(*(ref.getBrain()));
	std::cout << "Copy constructor cat" << std::endl;
}

Cat & Cat::operator=(Cat const & rhs)
{
	this->type = rhs.type;
	if (this->brain)
		delete (this->brain);
	this->brain = new Brain(*(rhs.getBrain()));
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Miaou" << std::endl;
}

std::string Cat::getType( void ) const
{
	return (this->type);
}

Brain *Cat::getBrain( void ) const
{
	return (this->brain);
}

void Cat::compareTo(Cat const & other_cat) const
{
	std::cout << "Compare two cats" << std::endl;
	std::cout << "Brain 1		 | 	Brain 2" << std::endl;
	for (int i = 0; i < 100; i++)
		std::cout << ((this->brain)->getIdeas())[i] << "\t | \t" << ((other_cat.getBrain())->getIdeas())[i] << std::endl;
}
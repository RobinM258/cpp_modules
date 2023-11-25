#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(): Animal("Dog")
{
	this->brain = new Brain;
	std::cout << "Constructor dog created" << std::endl;
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Constructor dog deleted" << std::endl;
}

Dog::Dog(Dog & ref): Animal(ref)
{
	this->brain = new Brain(*(ref.getBrain()));
	this->type = ref.getType();
	std::cout << "Constructor copy dog created" << std::endl;
}

Dog & Dog::operator=(Dog const & rhs)
{
	if (this->brain)
		delete (this->brain);
	this->brain = new Brain;
	this->type = rhs.type;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Waf" << std::endl;
}

std::string Dog::getType( void ) const
{
	return (this->type);
}

Brain *Dog::getBrain( void ) const
{
	return (this->brain);
}

void Dog::compareTo(Dog const & other_dog) const
{
	std::cout << "Compare two Dogs" << std::endl;
	std::cout << "Brain 1		 | 	Brain 2" << std::endl;
	for (int i = 0; i < 100; i++)
		std::cout << ((this->brain)->getIdeas())[i] << "\t | \t" << ((other_dog.getBrain())->getIdeas())[i] << std::endl;
}
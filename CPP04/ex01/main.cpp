#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main( void )
{
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << std::endl;

	delete dog;
	delete cat;
	std::cout << std::endl;

	Dog Kieron;
    Cat Victor;

	std::cout << std::endl;
	
    Dog & Kieron_ref = Kieron;
    Dog False_Kieron(Kieron_ref);
    Cat & Victor_ref = Victor;
    Cat False_Victor(Victor_ref);
    Kieron.compareTo(False_Kieron);
    Victor.compareTo(False_Victor);
}
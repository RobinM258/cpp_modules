#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
const WrongAnimal* n = new WrongAnimal();
const WrongAnimal* m = new WrongCat();
std::cout << "`" << j->getType() << "` type of dog" << std::endl;
std::cout << "`" << i->getType() << "` type of cat" << std::endl;
std::cout << "`" << meta->getType() << "` type of animal" << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();
std::cout << std::endl;
std::cout << m->getType() << " type of cat" << std::endl;
std::cout << n->getType() << " type of animal" << std::endl;
n->makeSound(); //will output the cat sound!
m->makeSound();

delete meta;
delete n;
delete m;
delete i;
delete j;
return 0;
}
#include "Animal.hpp"

Animal::Animal(void){std::cout << "constructor Animal created" << std::endl; this->type = "animal";}
Animal::~Animal(void){std::cout << "constructor Animal deleted" << std::endl;}

std::string Animal::getType(void) const {
    return(this->type);
}

void Animal::makeSound(void) const {
    std::cout << "Animal" << std::endl;
}
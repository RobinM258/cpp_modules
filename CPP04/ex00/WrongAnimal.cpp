#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void){std::cout << "constructor WrongAnimal created" << std::endl;}
WrongAnimal::~WrongAnimal(void){std::cout << "constructor WrongAnimal deleted" << std::endl;}

std::string WrongAnimal::getType(void) const {
    return (this->type);
}

void WrongAnimal::makeSound(void) const {
    std::cout << "WrongAnimal" << std::endl;
}
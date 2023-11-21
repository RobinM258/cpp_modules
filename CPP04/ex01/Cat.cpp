#include "Cat.hpp"

Cat::Cat(void){
    type = "Cat"; std::cout << "constructor Cat created" << std::endl;
    brain = new Brain;
    }
Cat::~Cat(void){
    std::cout << "constructor Cat deleted" << std::endl;
    delete brain;
    }

void Cat::makeSound(void) const{
    std::cout << "Miaou!" << std::endl;
}

std::string Cat::getType(void) const{
    return(this->type);
}
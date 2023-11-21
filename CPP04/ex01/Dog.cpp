#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(void){
    type = "Dog";
    std::cout << "constructor Dog created" << std::endl;
    brain = new Brain;
    }
Dog::~Dog(void){
    std::cout << "constructor Dog deleted" << std::endl;
    delete brain;
    }

void Dog::makeSound(void) const{
    std::cout << "Waf!" << std::endl;
}
std::string Dog::getType(void) const{
    return(this->type);
}
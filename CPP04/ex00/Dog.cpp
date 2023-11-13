#include "Dog.hpp"

Dog::Dog(void){type = "Dog"; std::cout << "constructor Dog created" << std::endl;}
Dog::~Dog(void){std::cout << "constructor Dog deleted" << std::endl;}

void Dog::makeSound(void) const{
    std::cout << "Waf!" << std::endl;
}
std::string Dog::getType(void) const{
    return(this->type);
}
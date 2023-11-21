#include "Dog.hpp"

Dog::Dog(void){type = "Dog"; std::cout << "constructor Dog created" << std::endl;}
Dog::~Dog(void){std::cout << "constructor Dog deleted" << std::endl;}

Dog::Dog(Dog & rf): Animal(rf){
    this->type = rf.getType();
    std::cout << "Copy constructor Dog constructed" << std::endl;
}

Dog & Dog::operator=(Dog const & rf){
    this->type = rf.type;
    return (*this);
}
void Dog::makeSound(void) const{
    std::cout << "Waf!" << std::endl;
}
std::string Dog::getType(void) const{
    return(this->type);
}
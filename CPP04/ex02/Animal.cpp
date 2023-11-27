#include "Animal.hpp"

Animal::Animal(void){std::cout << "constructor Animal created" << std::endl; this->type = "animal";}
Animal::~Animal(void){std::cout << "constructor Animal deleted" << std::endl;}


Animal::Animal(Animal const & rf){
    this->type = rf.type;
    std::cout << "Copy constructor Animal constructed" << std::endl;
}

Animal & Animal::operator=(Animal const & r){
    this->type = r.type;
    return (*this);
}
std::string Animal::getType(void) const {
    return(this->type);
}

void Animal::makeSound(void) const {
    std::cout << "Animal" << std::endl;
}

#include "Cat.hpp"

Cat::Cat(void): Animal("Cat") { std::cout << "constructor Cat created" << std::endl;}
Cat::~Cat(void){std::cout << "constructor Cat deleted" << std::endl;}

Cat::Cat(Cat & rf): Animal(rf)
{
    this->type = rf.getType();
    std::cout << "Copy constructor Cat constructed" << std::endl;
}

Cat & Cat::operator=(Cat const & r){
    this->type = r.type;
    return (*this);
}
void Cat::makeSound(void) const{
    std::cout << "Miaou!" << std::endl;
}

std::string Cat::getType(void) const{
    return(this->type);
}
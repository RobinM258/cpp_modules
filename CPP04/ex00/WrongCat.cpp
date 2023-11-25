#include "WrongCat.hpp"

WrongCat::WrongCat(void): WrongAnimal("WrongCat") { std::cout << "constructor WrongCat created" << std::endl;}
WrongCat::~WrongCat(void){std::cout << "constructor WrongCat deleted" << std::endl;}

WrongCat::WrongCat(WrongCat & rf): WrongAnimal(rf)
{
    this->type = rf.getType();
    std::cout << "Copy constructor WrongCat constructed" << std::endl;
}

WrongCat & WrongCat::operator=(WrongCat const & r){
    this->type = r.type;
    return (*this);
}
void WrongCat::makeSound(void) const{
    std::cout << "Miaou!" << std::endl;
}

std::string WrongCat::getType(void) const{
    return(this->type);
}
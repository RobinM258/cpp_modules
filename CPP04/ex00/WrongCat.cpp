#include "WrongCat.hpp"

WrongCat::WrongCat(void){type = "WrongCat"; std::cout << "constructor WrongCat created" << std::endl;}
WrongCat::~WrongCat(void){std::cout << "constructor WrongCat deleted" << std::endl;}

WrongCat::WrongCat(WrongCat & rf): WrongAnimal(rf){
    this->type = rf.type;
    std::cout << "Copy constructor WrongCat constructed" << std::endl;
}

WrongCat & WrongCat::operator=(WrongCat const & rf){
    this->type = rf.type;
    return (*this);
}
void WrongCat::makeSound(void) const{
    std::cout << "WrongMiaou!" << std::endl;
}

std::string WrongCat::getType(void) const{
    return(this->type);
}
#include "WrongCat.hpp"

WrongCat::WrongCat(void){type = "WrongCat"; std::cout << "constructor WrongCat created" << std::endl;}
WrongCat::~WrongCat(void){std::cout << "constructor WrongCat deleted" << std::endl;}

void WrongCat::makeSound(void) const{
    std::cout << "WrongMiaou!" << std::endl;
}

std::string WrongCat::getType(void) const{
    return(this->type);
}
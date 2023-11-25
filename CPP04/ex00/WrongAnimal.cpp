#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void): type("WrongAnimal") {std::cout << "constructor WrongAnimal created" << std::endl; this->type = "WrongAnimal";}
WrongAnimal::WrongAnimal(std::string ty): type(ty) {std::cout << "constructor Animal created" << std::endl;}
WrongAnimal::~WrongAnimal(void){std::cout << "constructor WrongAnimal deleted" << std::endl;}

WrongAnimal::WrongAnimal(WrongAnimal & rf){
    this->type = rf.type;
    std::cout << "Copy constructor WrongAnimal constructed" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & rf){
    this->type = rf.type;
    return (*this);
}
std::string WrongAnimal::getType(void) const {
    return (this->type);
}

void WrongAnimal::makeSound(void) const {
    std::cout << "WrongAnimal" << std::endl;
}
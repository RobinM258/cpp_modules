#include "Brain.hpp"

Brain::Brain(void){
    this->ideas = new std::string[100];
    for(int i = 0; i < 100; i++)
        this->ideas[i] = "brain idea";
    std::cout << "Brain created" << std::endl;
}

Brain::~Brain(void){
    delete []this->ideas;
    std::cout << "brain deleted" << std::endl;
}

std::string *Brain::getIdeas(){
    return (this->ideas);
}
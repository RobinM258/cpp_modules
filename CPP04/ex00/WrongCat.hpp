#ifndef WRONGCAT
#define WRONGCAT

#include "Animal.hpp"

class WrongCat: public Animal{
    private:
        std::string type;
    public:
        WrongCat(void);
        ~WrongCat(void);
        void makeSound(void) const;
        std::string getType(void) const;
};
#endif
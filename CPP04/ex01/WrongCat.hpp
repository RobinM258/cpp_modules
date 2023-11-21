#ifndef WRONGCAT
#define WRONGCAT

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal{
    private:
        std::string type;
    public:
        WrongCat(void);
        ~WrongCat(void);
        void makeSound(void) const;
        std::string getType(void) const;
};
#endif
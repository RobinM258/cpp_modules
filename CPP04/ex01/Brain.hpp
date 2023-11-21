#ifndef BRAIN
#define BRAIN

#include <iostream>

class Brain {
    protected:
        std::string *ideas;
    public:
        Brain(void);
        ~Brain(void);
        std::string *getIdeas();
};
#endif
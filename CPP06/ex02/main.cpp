#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"

#include <cstdlib>
#include <ctime>
#include <iostream>

Base * generate(void) {
    int r = std::rand() % 3;
    if (r == 0)
        return new A();
    else if (r == 1)
        return new B();
    else
        return new C();
}
void identify(Base* p) {
    if (dynamic_cast<const A *>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<const B *>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<const C *>(p))
        std::cout << "C" << std::endl;
}
void identify(Base& p) {
    if (dynamic_cast<const A *>(&p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<const B *>(&p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<const C *>(&p))
        std::cout << "C" << std::endl;

}


int main (void)
{
    std::srand(static_cast<unsigned>(std::time(0)));
    Base *test = generate();
    identify(test);
    identify(*test);
    return 0;
}

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
{
	Base a;
	Base b;
	Base c;
	try
	{
		a = dynamic_cast<A&> (p);
		std::cout << "A" << std::endl;
	}catch(std::exception & e){}
	try
	{
		b = dynamic_cast<B&> (p);
		std::cout << "B" << std::endl;
	}catch(std::exception & e){}
	try
	{
		c = dynamic_cast<C&> (p);
		std::cout << "C" << std::endl;
	}catch(std::exception & e){}
}

}


int main (void)
{
    std::srand(static_cast<unsigned>(std::time(0)));
    Base *test = generate();
    identify(test);
    identify(*test);
    delete(test);
    return 0;
}

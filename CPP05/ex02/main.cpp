
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main (void)
{

    std::cout << "..............................................................." << std::endl;
    try
    {
        Form test("Kieron", 150, 150);
        ShrubberyCreationForm test2("Victor");
        Bureaucrat test3(100, "David");
        test2.beSigned(test3);
        test2.exec(test3); 
    }
    catch(const std::exception & e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "..............................................................." << std::endl;
    return 0;
}
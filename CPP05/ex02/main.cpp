
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main (void)
{

    std::cout << "..............................................................." << std::endl;
    try
    {
        Form test("Kieron", 150, 150);
        Bureaucrat test3(4, "David");
        test.beSigned(test3);
        ShrubberyCreationForm test2("Victor");
        RobotomyRequestForm test4("Robin");
        PresidentialPardonForm test5("Axel");
        test5.beSigned(test3);
        test4.beSigned(test3);
        test2.beSigned(test3);
        test5.exec(test3);

    }
    catch(const std::exception & e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "..............................................................." << std::endl;
    return 0;
}
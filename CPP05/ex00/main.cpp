#include "Bureaucrat.hpp"

int main (void)
{
    try
    {
        Bureaucrat test(150, "Robin");
        std::cout << test.getName() << std::endl;

        test.incrementGrade();
        test.decrementGrade();
        test.decrementGrade();
        std::cout << test;
    }
    catch(const std::exception & e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout <<"...................................................................................." << std::endl;
    try
    {
        Bureaucrat test(150, "Kieron");
        std::cout << test.getName() << std::endl;

        test.incrementGrade();
        test.decrementGrade();
        test.incrementGrade();
        test.incrementGrade();
        test.incrementGrade();
        std::cout << test;
    }
    catch(const std::exception & e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout <<"...................................................................................." << std::endl;
    try
    {
        Bureaucrat test(1, "David");
        std::cout << test.getName() << std::endl;

        test.incrementGrade();
        test.decrementGrade();
        std::cout << test;
    }
    catch(const std::exception & e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}
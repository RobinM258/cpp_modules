
#include "Form.hpp"

int main (void)
{

    std::cout << "..............................................................." << std::endl;
    try
    {
        Form test("Kieron", 158, 150);

        std::cout << test;
    }
    catch(const std::exception & e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "..............................................................." << std::endl;
    try
    {
        Form test("Robin");
        Bureaucrat test2(150, "Victor");
        test2.signForm(test);
        Form test3;
        std::cout << test;
        std::cout << test.getSign() << std::endl;
        test.beSigned(test2);
        std::cout << test.getSign() << std::endl;
        test2.signForm(test);
    }
    catch(const std::exception & e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}
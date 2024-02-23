
#include "Form.hpp"

int main (void)
{
    Bureaucrat bureau = Bureaucrat(150, "robin");
    Form test = Form();
    std::cout << test << std::endl;
    bureau.signForm(test);
    test.beSigned(bureau);

    std::cout << "..............................................................." << std::endl;
    Form kieron = Form("kieron", 158, 150);
    std::cout << kieron << std::endl;
    return 0;
}
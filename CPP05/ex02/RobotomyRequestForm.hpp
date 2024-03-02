#ifndef ROBOT
#define ROBOT

#include "Bureaucrat.hpp"
#include "AForm.hpp"

class Bureaucrat;
class Form;

class RobotomyRequestForm: public Form 
{
    private:
        RobotomyRequestForm(void);
    const std::string target;
    public:
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(RobotomyRequestForm &src);
        ~RobotomyRequestForm();
        RobotomyRequestForm &operator=(const RobotomyRequestForm &src);
        std::string getTarget(void) const;
        void exec(Bureaucrat const &path) const;

};

#endif
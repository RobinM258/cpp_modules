
#ifndef BUREAU
#define BUREAU

#include <iostream>

class Bureaucrat {

    private:
        const std::string name;
        size_t grade;
    public:
        Bureaucrat(int nb, std::string na);
        ~Bureaucrat(void);
        std::string getName(void) const;
        size_t getGrade(void) const;
        void decrementGrade(void);
        void incrementGrade(void);
        Bureaucrat &operator=(const Bureaucrat &);
    class GradeTooLowException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};

};

std::ostream &operator<<(std::ostream& , const Bureaucrat &);

#endif
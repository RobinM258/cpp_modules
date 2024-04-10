#ifndef RPN
#define RPN

#include <iostream>
#include <stack>

class Rpn
{
    private:
        std::stack<double> value;
    public:
        Rpn(void);
        ~Rpn(void);
        Rpn(const Rpn &);
        Rpn & operator=(const Rpn &);
        void calculate(std::string);
};

#endif
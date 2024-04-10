#include "RPN.hpp"

Rpn::Rpn(void){}
Rpn::~Rpn(void){}
Rpn::Rpn(const Rpn &src)
{
    *this = src;
}

Rpn &Rpn::operator=( const Rpn &ref ) {
    this->value = ref.value;
    return *this;
}

void Rpn::calculate(std::string tab)
{
    int i = 0;
    while (tab[i])
    {
        if (tab[i] == ' ')
            ;
        else if (std::isdigit(tab[i]))
            value.push(tab[i] - '0');
        else if (value.size() != 2)
        {
            std::cout << "Error" << std::endl;
            return ;
        }
        else
        {
            int tmp = value.top();
            value.pop();
            switch (tab[i])
            {
                
                case '+':
                    tmp = value.top() + tmp;
                    break;
                case '-':
                    tmp = value.top() - tmp;
                    break;
                case '*':
                    tmp = value.top() * tmp;
                    break;
                case '/':
                    tmp = value.top() / tmp;
                    break;
                default :
                    std::cout << "Error" << std::endl;
                    break;
            }
            
            value.pop();
            value.push(tmp);
        }
        i++;
    }
    std::cout << value.top() << std::endl;
    
}
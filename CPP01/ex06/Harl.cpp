#include "Harl.hpp"

Harl::Harl(void){std::cout << "Harl created" << std::endl;}
Harl::~Harl(void){std::cout << "Harl deleted" << std::endl;}
Harl    Harl::operator=( const  Harl& Harl ) { (void)Harl; return (*this); }

void Harl::debug(void){ std::cout << "Debug" << std::endl;}
void Harl::info(void){ std::cout << "Info" << std::endl;}
void Harl::error(void){ std::cout << "Error" << std::endl;}
void Harl::warning(void){ std::cout << "Warning" << std::endl;}

void Harl::complain(std::string level)
{
    std::string l[4] = { "INFO", "DEBUG", "ERROR", "WARNING" };
    int j = -1;
    for (int i = 0; i < 4; i++)
        if (l[i] == level)
            j = i;
    switch (j)
    {
        case 0:
            info();
        case 1:
            debug();
        case 2:
            warning();
        case 3:
            error();
            break ;
        default:
            std::cout << "unknow" << std::endl;
    }
}
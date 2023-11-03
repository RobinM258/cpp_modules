#include "Harl.hpp"

Harl::Harl(void){std::cout << "Harl created" << std::endl;}
Harl::~Harl(void){std::cout << "Harl deleted" << std::endl;}

void Harl::debug(void){ std::cout << "Debug" << std::endl;}
void Harl::info(void){ std::cout << "Info" << std::endl;}
void Harl::error(void){ std::cout << "Error" << std::endl;}
void Harl::warning(void){ std::cout << "Warning" << std::endl;}

void Harl::complain(std::string level)
{
	void (Harl::*p[4])(void) = { &Harl::info, &Harl::debug, &Harl::error, &Harl::warning };
    std::string l[4] = { "INFO", "DEBUG", "ERROR", "WARNING" };
    for (int i = 0; i < 4; i++)
        if (l[i] == level)
            (this->*p[i])();
}


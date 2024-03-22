#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(const char *str)
{
    std::string line;
    std::ifstream in(str);
    if (!in)
    {
		std::cout << "Fichier introuvable" << std::endl;
        return ;
    }
    while (getline(in, line))
        std::cout <<  line << std::endl;
}

BitcoinExchange::~BitcoinExchange(void) {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &src)
{
    *this = src;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &ref )
{
    (void) ref;
    return (*this);
}

int valid_line(std::string line)
{
    int i = 0;
    while (i < 4)
    {
        if(!isdigit(line[i]))
        {
            std::cout << "error in date" << std::endl;
            return (1);
        }
    }
    if (line[++i]  != '-')
    {
        std::cout << "error in format line" << std::endl;
        return (1);
    }
    while (i < 7)
    {
        if(!isdigit(line[i]))
        {
            std::cout << "error in date" << std::endl;
            return (1);
        }
    }
    if (line[++i]  != '-')
    {
        std::cout << "error in format line" << std::endl;
        return (1);
    }
    while (i < 10)
    {
        if(!isdigit(line[i]))
        {
            std::cout << "error in date" << std::endl;
            return (1);
        }
    }
    return (0);
}
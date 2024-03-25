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
    {
        valid_line(line);
        std::cout <<  line << std::endl;
    }
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
int BitcoinExchange::return_value(std::string date, long int value)
{
    std::string line;
    std::ifstream in("data.csv");
    std::string date;
    if (!in)
    {
		std::cout << "Fichier introuvable" << std::endl;
        return ;
    }
    while (getline(in, line))
    {
       date = line.substr(0, line.find('|')); 
    }

}
int BitcoinExchange::valid_line(std::string line)
{
    int i = 0;
    while (i < 4)
    {
        if(!isdigit(line[i]))
        {
            std::cout << "error in date : " << line << std::endl;
            return (1);
        }
        i++;
    }
    if (line[i++]  != '-')
    {
        std::cout << "error in format line : " << line << std::endl;
        return (1);
    }
    while (i < 7)
    {
        if(!isdigit(line[i]))
        {
            std::cout << "error in date : " << line << std::endl;
            return (1);
        }
        i++;
    }
    if (line[i++]  != '-')
    {
        std::cout << "error in format line : " << line << std::endl;
        return (1);
    }
    while (i < 10)
    {
        if(!isdigit(line[i]))
        {
            std::cout << "error in date : " << line << std::endl;
            return (1);
        }
        i++;
    }
    if (line.find('|') >= line.size())
    {
        std::cout << "error in format line : " << line << std::endl;
        return (1);
    }
    std::string date = line.substr(0, line.find('|'));
    std::string num = line.substr(line.find('|') + 1, line.size());

    std::stringstream ss(num);
    long int value;
    ss >> value;
    if (value < 0 || value > 10000)
    {
        std::cout << "wrong value "  << line << std::endl;
        return 1;
    }
    return (0);
}
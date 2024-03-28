#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(const char *str)
{
    std::string line;
    std::ifstream in(str);
    if (!in)
    {
		std::cout << "Error: could not open file" << std::endl;
        return ;
    }
    getline(in, line);
    while (getline(in, line))
        valid_line(line);
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
int BitcoinExchange::search_date(std::string date, float value)
{
    std::string line;
    std::ifstream in("data.csv");
    std::string tempo_date;
    std::string new_line;
    std::string num;
    float values;
    float result;
    int index;
    if (!in)
    {
		std::cout << "Fichier introuvable" << std::endl;
        return 1;
    }
    getline(in, line);
    while (getline(in, line))
    {
        tempo_date = line.substr(0, line.find(','));
        index = date.compare(tempo_date);
        if (index < 0)
        {
            num = line.substr(line.find(',') + 1, line.size());
            std::stringstream ss(num);
            ss >> values;
            result = value * values;
            std::cout << date << " => " << value << " = " << result << std::endl;
            return 0;
        }
        new_line = line;
    }
    return 0;
}
int BitcoinExchange::return_value(std::string date, float value)
{
    std::string line;
    std::ifstream in("data.csv");
    std::string tempo_date;
    std::string num;
    float values;
    float result;
    if (!in)
    {
		std::cout << "Fichier introuvable" << std::endl;
        return 1;
    }
    while (getline(in, line))
    {
        tempo_date = line.substr(0, line.find(',')); 
        if (date.compare(tempo_date) == 0)
        {
            num = line.substr(line.find(',') + 1, line.size());
            std::stringstream ss(num);
            ss >> values;
            result = value * values;
            std::cout << date << " => " << value << " = " << result << std::endl;
            return 0;
        }
    }
    search_date(date, value);
    return 0;
}
int BitcoinExchange::valid_line(std::string line)
{
    int i = 0;
    while (i < 4)
    {
        if(!isdigit(line[i]))
        {
            std::cout << "Error: bad input => " << line << std::endl;
            return (1);
        }
        i++;
    }
    if (line[i++]  != '-')
    {
        std::cout << "Error: bad input => " << line << std::endl;
        return (1);
    }
    while (i < 7)
    {
        if(!isdigit(line[i]))
        {
            std::cout << "Error: bad input => " << line << std::endl;
            return (1);
        }
        i++;
    }
    if (line[i++]  != '-')
    {
        std::cout << "Error: bad input => " << line << std::endl;
        return (1);
    }
    while (i < 10)
    {
        if(!isdigit(line[i]))
        {
            std::cout << "Error: bad input => " << line << std::endl;
            return (1);
        }
        i++;
    }
    if (line.find('|') >= line.size())
    {
        std::cout << "Error: bad input => " << line << std::endl;
        return (1);
    }
    std::string date = line.substr(0, line.find('|') - 1);
    std::string num = line.substr(line.find('|') + 1, line.size());

    std::stringstream ss(num);
    float value;
    ss >> value;
    if (value < 0)
    {
        std::cout << "Error: not positive number." << std::endl;
        return 1;
    }
    if (value > 10000)
    {
        std::cout << "Error: too large a number." << std::endl;
        return 1;
    }
    return_value(date, value);
    return (0);
}
#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(const char *str)
{
    std::string line;
    int len = strlen(str);
    if (strncmp(str + len - 4, ".csv", 4) != 0 || len <= 4)
    {
        std::cout << "Error: could not open file" << std::endl;
        return ;
    }
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
    file = ref.file;
    return (*this);
}
std::string BitcoinExchange::changedate(std::string date)
{
    std::string ret;
    int i = 0;
    while (i < 5)
    {
        ret.push_back(date[i]);
        i++;
    }
    if (isdigit(date[i]) && isdigit(date[i + 1]))
    {
        ret.push_back(date[i]);
        ret.push_back(date[i + 1]);
        ret.push_back(date[i + 2]);
        i += 3;
    }
    else
    {
        ret.push_back('0');
        ret.push_back(date[i]);
        ret.push_back(date[i + 1]);
        i += 2;
    }
    if (isdigit(date[i]) && isdigit(date[i + 1]))
    {
        ret.push_back(date[i]);
        ret.push_back(date[i + 1]);
        ret.push_back(date[i + 2]);
        i += 3;
    }
    else
    {
        ret.push_back('0');
        ret.push_back(date[i]);
        ret.push_back(date[i + 1]);
        i += 2;
    }

   //std::cout << ret << std::endl;
    return ret;
}

int BitcoinExchange::search_date(std::string date, float value)
{
    std::string dateparse = changedate(date);
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
        index = dateparse.compare(tempo_date);
        if (index < 0)
        {
           // std::cout << "Comparaison " << dateparse << " " << tempo_date << std::endl;
            num = new_line.substr(line.find(',') + 1, new_line.size());
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

int BitcoinExchange::TrueValue(std::string line, int index) 
{
    std::stringstream ss (line);
    int value ;
    ss >> value;
    //std::cout << "Verification de : " << value << " " << index << std::endl;
    if (index == 0)
    {
        if (value < 2009)
        {
            std::cout << "Error: bad input => " << line << std::endl;
            return (1);
        }
    }
    else if (index == 1)
    {
        if (value > 12  ||  value <= 0)
        {
            std::cout << "Error: bad input => " << line << std::endl;
            return (1);
        }
    }
    else if (index == 2)
    {
        if (value > 31 ||  value <= 0)
        {
            std::cout << "Error: bad input => " << line << std::endl;
            return (1);
        }
    }

    return 0;
}

int BitcoinExchange::valid_line(std::string line)
{
    int i = 0;
    int j = 0;
    std::string verifval;
    while (isdigit(line[i]))
    {
        verifval.push_back(line[i]);
        j++;
        i++;
    }
    if (TrueValue(verifval, 0) == 1)
        return 1;
    j = 0;
    verifval = "";
    if (line[i++]  != '-')
    {
        std::cout << "Error: bad input => " << line << std::endl;
        return (1);
    }

    while (isdigit(line[i]))
    {
        verifval.push_back(line[i]);
        j++;
        i++;
    }
    if (TrueValue(verifval, 1) == 1)
        return 1;
    j = 0;
    verifval = "";
    if (line[i++]  != '-')
    {
        std::cout << "Error: bad input => " << line << std::endl;
        return (1);
    }

    while (isdigit(line[i]))
    {
        verifval.push_back(line[i]);
        j++;
        i++;
    }
    if (TrueValue(verifval, 2) == 1)
        return 1;
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
    if (value <= 0)
    {
        std::cout << "Error: Wrong number." << std::endl;
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
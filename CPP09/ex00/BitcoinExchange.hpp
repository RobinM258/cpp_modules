#ifndef BITCOIN
#define BITCOIN

#include <iostream>
#include <map>
#include <string>
#include <fstream>

class BitcoinExchange 
{
    private:
        std::map<std::string, double> file;
    public:
        BitcoinExchange(const char *);
        BitcoinExchange(const BitcoinExchange & );
        ~BitcoinExchange(void);
        BitcoinExchange & operator=( const BitcoinExchange & );
        int valid_line(std::string);
};
#endif
#ifndef BITCOIN
#define BITCOIN

#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <cstdlib>
#include <sstream>
#include <cstring>
#include <string>

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
        int return_value(std::string, float );
        int search_date(std::string, float );
        int TrueValue(std::string , int);
};
#endif
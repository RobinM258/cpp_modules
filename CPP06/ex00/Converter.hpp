#ifndef CONVERTER
#define CONVERTER

#include <iostream>
#include <string>
#include <sstream> 
#include <locale>
#include <cctype>
#include <iomanip>

class Converter{
    private:
        static int getType(std::string arg);
    public:
        static void converter(std::string arg);
};

//std::ostream& operator<<( std::ostream& out, const Converter& src );

#endif
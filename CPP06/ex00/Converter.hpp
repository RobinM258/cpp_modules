#ifndef CONVERTER
#define CONVERTER

#include <iostream>
#include <string>
#include <sstream> 
#include <locale>
#include <cctype>
#include <stdlib.h>
#include <climits>
#include <iomanip>
#include <stdlib.h>

class Converter{
    private:
        Converter();
    public:
        static void converter(std::string arg);
        static void ConverterToChar(std::string arg);
        static void ConverterToInt(std::string arg);
        static void ConverterToFloat(std::string arg);
        static void ConverterToDouble(std::string arg);
};


#endif
#ifndef CONVERTER
#define CONVERTER

#include <iostream>
#include <string>
#include <sstream> 
#include <locale>
#include <stdlib.h>
#include <climits>
#include <iomanip>
// #include <stdlib.h>

class ScalarConverter{
    private:
        ScalarConverter();
        ~ScalarConverter();
        ScalarConverter(const ScalarConverter &);
        ScalarConverter & operator=(const ScalarConverter &);
    public:
        static void Scalarconverter(std::string arg);
        static void ScalarConverterToChar(std::string arg);
        static void ScalarConverterToInt(std::string arg);
        static void ScalarConverterToFloat(std::string arg);
        static void ScalarConverterToDouble(std::string arg);
};


#endif
#include "Converter.hpp"

void Converter::ConverterToChar(std::string arg) {
    if (arg.size() == 1)
        std::cout << "char: " << arg << std::endl;
    else if (strtod(arg.data(), NULL) >= 33 && strtod(arg.data(), NULL) <= 126)
        std::cout << "char:" << static_cast<char> (strtod(arg.data(), NULL)) << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
}

void Converter::ConverterToInt(std::string arg) {
    if (!isdigit(arg[0]))
    {
        std::cout << "int: impossible" << std::endl;
        return;
    }
    char *test;
    int a = static_cast<int> (strtod(arg.data(), &test));
    if (strtod(arg.data(), &test) < -2147483648 || strtod(arg.data(), &test) > 2147483647)
    {
        std::cout << "int: impossible" << std::endl;
        return;
    }
    std::cout << "int: " << a << std::endl;
}

void Converter::ConverterToFloat(std::string arg) {
    char *test;
    if (arg == "nan")
    {
         std::cout << "float: nanf" << std::endl;
        return;
    }
    if (!isdigit(arg[0]))
    {
        std::cout << "float: impossible" << std::endl;
        return;
    }
    float a = static_cast<float> (strtod(arg.data(), &test));
    if (a == static_cast<int> (strtod(arg.data(), &test)))
    {
        std::cout << "float: " << std::setprecision(arg.size()) << a << ".0f" << std::endl;
        return;
    }
    std::cout << "float: " << std::setprecision(arg.size()) << a << "f" << std::endl;
}

void Converter::ConverterToDouble(std::string arg) {
    char *test;
    if (arg == "nan")
    {
         std::cout << "double: nan" << std::endl;
        return;
    }
    if (!isdigit(arg[0]))
    {
        std::cout << "double: impossible" << std::endl;
        return;
    }
    double a = static_cast<double> (strtod(arg.data(), &test));
    if (a == static_cast<int> (strtod(arg.data(), &test)))
    {
        std::cout << "double: " << std::setprecision(arg.size()) << a << ".0" << std::endl;
        return;
    }
    std::cout << "double: " << std::setprecision(arg.size()) << a << std::endl;
}

void Converter::converter(std::string arg){
    ConverterToChar(arg);
    ConverterToInt(arg);
    ConverterToFloat(arg);
    ConverterToDouble(arg);
}



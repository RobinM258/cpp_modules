#include "Converter.hpp"

void ScalarConverter::ScalarConverterToChar(std::string arg) {
    if (arg.size() == 1)
        std::cout << "char: " << arg << std::endl;
    else if (strtod(arg.data(), NULL) >= 33 && strtod(arg.data(), NULL) <= 126)
        std::cout << "char: " << static_cast<char> (strtod(arg.data(), NULL)) << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
}

void ScalarConverter::ScalarConverterToInt(std::string arg) {
    if (arg == "nanf" || arg == "nan")
    {
        std::cout << "int: nan" << std::endl;
        return;
    }
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

void ScalarConverter::ScalarConverterToFloat(std::string arg) {
    char *test;

    float a = static_cast<float> (strtod(arg.data(), &test));
    if (test[0] && test[0] != 'f')
    {
        std::cout << "float: impossible" << std::endl;
        return;
    }
    if (a == static_cast<int> (strtod(arg.data(), &test)))
    {
        std::cout << "float: " << std::setprecision(arg.size()) << a << ".0f" << std::endl;
        return;
    }
    std::cout << "float: " << std::setprecision(arg.size()) << a << "f" << std::endl;
}

void ScalarConverter::ScalarConverterToDouble(std::string arg) {
    char *test;

    double a = static_cast<double> (strtod(arg.data(), &test));
    if (test[0] && test[0] != 'f')
    {
        std::cout << "double: impossible" << std::endl;
        return;
    }
    if (a == static_cast<int> (strtod(arg.data(), &test)))
    {
        std::cout << "double: " << std::setprecision(arg.size()) << a << ".0" << std::endl;
        return;
    }
    std::cout << "double: " << std::setprecision(arg.size()) << a << std::endl;
}
ScalarConverter::~ScalarConverter() {

}
ScalarConverter::ScalarConverter(const ScalarConverter & obj) {
    *this = obj;
}
ScalarConverter & ScalarConverter::operator=(const ScalarConverter & src) {
    return *this;
}
void ScalarConverter::Scalarconverter(std::string arg){
    ScalarConverterToChar(arg);
    ScalarConverterToInt(arg);
    ScalarConverterToFloat(arg);
    ScalarConverterToDouble(arg);
}




#include <iostream>

int main (void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = str;

    std::cout << "adress memoire de str:       " << &str << std::endl;
    std::cout << "adress memoire de stringPTR: " << &stringPTR << std::endl;
    std::cout << "adress memoire de stringREF: " << &stringREF << std::endl;

    std::cout << "valeur de str:       " << str << std::endl;
    std::cout << "valeur de stringPTR: " << *stringPTR << std::endl;
    std::cout << "valeur de stringREF: " << stringREF << std::endl;
}
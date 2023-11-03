
#include "PhoneBook.hpp"
int main()
{
    PhoneBook pb;
    std::string str;
    while(str != "EXIT")
    {
        std::cout << "Utilise SEARCH, ADD, EXIT" << std::endl;
        std::getline(std::cin, str);
        if (std::cin.eof())
			return 0;
        if (str == "ADD")
        {
            if (pb.add_contact() == 0)
                return 0;
        }
        else if (str == "SEARCH")
        {
           if (pb.display_contact() == 0)
                return 0;
        }
    }
    return (0);
}
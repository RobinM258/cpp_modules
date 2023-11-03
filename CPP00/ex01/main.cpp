
#include "PhoneBook.hpp"
int main()
{
    PhoneBook pb;
    while(1)
    {
        std::string str;
        std::cin >> str;
        if (std::cin.eof())
            break;
        if (str == "ADD")
        {
            pb.add_contact();
        }
        else if (str == "SEARCH")
        {
           pb.display_contact();
        }
        else if (str == "EXIT")
            return (0);
    }
    return (0);
}
#include "easyfind.hpp"

int main(void)
{
    std::vector<int> tab;
    std::vector<int> tab2;
    try
    {
        tab.push_back(10);
        tab.push_back(20);
        easyfind(tab, 10);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        tab2.push_back(10);
        tab2.push_back(20);
        easyfind(tab, 11);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}
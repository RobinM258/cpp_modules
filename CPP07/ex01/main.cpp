#include "iter.hpp"

int main (void)
{
    char c[] = {'a', 'b'};
    iter(c, 2, &print);
    std::string str[] = {"robin", "kieron"};
    iter(str, 2, &print);
    int chaine[] = {1, 2, 3};
    iter(chaine, 3, &print);
    int chaine2[] = {1, 2, 3};
    iter(chaine2, -3, &print);
    return 0;
}
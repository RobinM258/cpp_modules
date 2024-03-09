#include "iter.hpp"

int main (void)
{
    char c[] = {'a', 'b'};
    iter(c, 2, &print);
    std::string str[] = {"robin", "kieron"};
    iter(str, 2, &print);
    int chaine[] = {1, 2};
    iter(chaine, 2, &print);
    return 0;
}
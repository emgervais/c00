
#include <iostream>

int main(int ac, char **av)
{
    if(ac == 1)
        return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl, 0);
    char a;
    for(int j = 1; j < ac; ++j)
        for (size_t i = 0; av[j][i]; ++i)
        {
            a = toupper(av[j][i]);
            std::cout << a;
        }
    std::cout << std::endl;
    return 0;
}
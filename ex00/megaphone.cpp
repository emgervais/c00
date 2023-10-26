
#include <iostream>
#include <string>

int main(int ac, char **av)
{
    if(ac == 1)
        return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl, 0);
    for(int j = 1; j < ac; ++j)
    {
        std::string av2(av[j]);
        std::transform(av2.begin(), av2.end(), av2.begin(), ::toupper);
        std::cout << av2;
    }
    std::cout << std::endl;
    return 0;
}
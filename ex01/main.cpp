#include "PhoneBook.hpp"

int main()
{
    PhoneBook p;

    std::string in = "";
    std::cout << "ADD, SEARCH OR EXIT" << std::endl;
    while(1)
    {
        if(!in.compare("EXIT"))
            return 0;
        if(!in.compare("SEARCH"))
            p.search();
        if(!in.compare("ADD"))
            p.ac();
        std::cout << std::flush << "> ";
        std::cin >> in;
    }
    return 0;
}
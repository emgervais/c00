#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
    std::cout << "quitting the phonebook" << std::endl;
}

void PhoneBook::search()
{
    for(int i = 0; i < 8; ++i)
        this->repertoire[i].view(i);
    int in;
    int ok = 1;
    std::cout << "please enter an index between 0 and 7" << std::endl;
    do
    {
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        std::cin >> in;
        if(std::cin.good() && in >= 0 && in < 8)
            ok = 0;
        else
        {
            std::cin.clear();
            std::cout << "please re-enter an index between 0 and 7" << std::endl;
        }
    } while (ok != 0);
    this->repertoire[in].view(in);
}

void PhoneBook::ac(void)
{
    static int i;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    this->repertoire[i++ % 8].add();
}

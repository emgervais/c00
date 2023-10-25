#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
    std::cout << "quitting the phonebook" << std::endl;
}

void PhoneBook::search() {
    for (int i = 0; i < 8; ++i)
        this->repertoire[i].view(i);

    int in;

    while (true) {
        std::cout << "Please enter an index between 0 and 7: ";
        if (std::cin >> in) {
            if (in >= 0 && in < 8) {
                this->repertoire[in].view(in);
                break;
            }
        } else if (std::cin.eof())
            return; 
        else {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input. Please re-enter an index between 0 and 7." << std::endl;
        }
    }
}



void PhoneBook::ac(void)
{
    static int i;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    this->repertoire[i++ % 8].add();
}
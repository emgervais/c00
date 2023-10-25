#include "PhoneBook.hpp"

int main(void) {
    PhoneBook book;
    std::string input = "";

    std::cout << "enter ADD, SEARCH or EXIT" << std::endl;
    while (input.compare("EXIT") && std::cin.good())
    {
        if (input.compare("ADD") == 0)
            book.ac();
        else if (input.compare("SEARCH") == 0) 
            book.search();
        std::cout << "> " << std::flush;
        std::cin >> input;
    }
    return 0;
}
#include "Contact.hpp"
#include "iostream"

class PhoneBook
{
    Contact repertoire[8];

public:
    PhoneBook(/* args */);
    ~PhoneBook();
    int search(Contact *);
};

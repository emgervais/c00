#include "Contact.hpp"
#include "iostream"

class PhoneBook
{
    Contact repertoire[8];

public:
    PhoneBook();
    ~PhoneBook();
    void search(void);
    void ac(void);
};

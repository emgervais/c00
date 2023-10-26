#include "Contact.hpp"
#include <iostream>
#include <string>

class PhoneBook
{
private:
    Contact repertoire[8];

public:
    PhoneBook();
    ~PhoneBook();
    void search(void);
    void ac(void);
};

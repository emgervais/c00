#include "Contact.hpp"
#include <iomanip>

Contact::Contact(void)
{
    for(int i = 0; i < 5; ++i)
        _data[i] = "";
    return ;
}

Contact::~Contact()
{
    return ;
}

std::string Contact::_input(std::string s)
{
    std::string in = "";
    int ok = 1;

    std::cout << "please enter " << s << std::endl << "> ";
    do
    {
        std::getline(std::cin, in);
        if(std::cin.good() && !in.empty())
            ok = 0;
        else
        {
            if(!std::cin.good())
                exit (0);
            std::cin.clear();
            std::cout << "please re-enter " << s << std::endl;
        }
    } while (ok != 0);
    return in;
}

void Contact::view(int i)
{
    if(!this->_data[0].length())
        return ;
    std::cout << '|' << i;
    for(int k = 0; k < 3; ++k)
        std::cout << '|' << std::setw(10) << _print(this->_data[k]);
    std::cout << '|' << std::endl;
}

void Contact::viewf(int i)
{
    if(!this->_data[0].length())
        return ;
    std::cout << std::endl;
    std::cout << "Contact #" << i << " <<----" << std::endl;
    std::cout << "First Name: " << this->_data[0] << std::endl;
    std::cout << "Last Name: " << this->_data[1] << std::endl;
    std::cout << "Nickname: " << this->_data[2] << std::endl;
    std::cout << "deepest secret: " << this->_data[3] << std::endl;
    std::cout << "phone number: " << this->_data[4] << std::endl;
    std::cout << std::endl;
}

std::string Contact::_print(std::string str)
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

void Contact::add(void)
{
    this->_data[0] = this->_input("the first name");
    this->_data[1] = this->_input("the last name");
    this->_data[2] = this->_input("the nickname");
    this->_data[3] = this->_input("there deepest secret");
    this->_data[4] = this->_input("there phone number");
}

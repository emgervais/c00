/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egervais <egervais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:07:06 by egervais          #+#    #+#             */
/*   Updated: 2023/10/25 00:13:55 by egervais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) : _num(0)
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
            std::cin.clear();
            std::cout << "please re-enter " << s << std::endl;
        }
    } while (ok != 0);
    return in;
}

void Contact::view(int i)
{
    std::cout << '|' << i;
    for(int k = 0; k < 3; ++k)
    {
        if(this->_data[k].length() > 10)
            this->_data[k].replace(9, 10, ".").resize(10);
        std::cout << '|' << this->_data[k];
    }
    std::cout << '|' << std::endl;
}

void Contact::add(void)
{
    this->_data[0] = this->_input("the first name");
    this->_data[1] = this->_input("the last name");
    this->_data[2] = this->_input("the nickname");
    this->_data[3] = this->_input("there deepest secret");
    this->_data[4] = this->_input("there phone number");
}

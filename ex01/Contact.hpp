/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egervais <egervais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:07:00 by egervais          #+#    #+#             */
/*   Updated: 2023/10/26 17:54:40 by egervais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Contact
{
private:
    std::string _data[5];
    std::string _input(std::string s);
    std::string _print(std::string str);

public:
    Contact();
    ~Contact();
    void    view(int i);
    void    viewf(int i);
    void    add(void);
};
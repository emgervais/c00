/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egervais <egervais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:07:00 by egervais          #+#    #+#             */
/*   Updated: 2023/10/25 19:07:31 by egervais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Contact
{
private:
    std::string _data[5];
    std::string _input(std::string s);

public:
    Contact();
    ~Contact();
    void    view(int i);
    void    add(void);
};
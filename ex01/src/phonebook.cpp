/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 20:43:44 by steh              #+#    #+#             */
/*   Updated: 2022/08/19 21:10:08 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook()
{
	this->_idx = 0;
}

Phonebook::~Phonebook()
{

}

void	Phonebook::ft_display()
{
	std::cout << "+----------------PHONEBOOK----------------+" << std::endl;
	std::cout << "|                  1-ADD                  |" << std::endl;
	std::cout << "|                 2-SEARCH                |" << std::endl;
	std::cout << "|                  3-EXIT                 |" << std::endl;
	std::cout << "+-----------------------------------------+" << std::endl;
}

void	Phonebook::ft_add()	
{
	Contact	contact;

	std::string input;
	std::string output;
	std::cout << "First Name" << std::endl;
	std::cin >> input;
	contact.set_first_name(input);
	std::cout << "Last Name" << std::endl;
	std::cin >> input;
	contact.set_last_name(input);
	std::cout << "Nick Name" << std::endl;
	std::cin >> input;
	contact.set_nick_name(input);
	std::cout << "Secret" << std::endl;
	std::cin >> input;
	contact.set_darkest_secret(input);
	std::cout << "Phone number" << std::endl;
	std::cin >> input;
	contact.set_phone_number(input);
	this->_contacts[_idx] = contact;
	this->_idx++;
	std::cout << "Successfully added" << std::endl;
	// output = contact.get_first_name();
	// std::cout << "Output First Name: " << output;
}

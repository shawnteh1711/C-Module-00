/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 20:43:44 by steh              #+#    #+#             */
/*   Updated: 2022/08/21 19:43:52 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook(void) : _idx(0), _cur(0)
{
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

void	PhoneBook::ft_display(void)
{
	std::cout << "+----------------PHONEBOOK----------------+" << std::endl;
	std::cout << "|                  1-ADD                  |" << std::endl;
	std::cout << "|                 2-SEARCH                |" << std::endl;
	std::cout << "|                  3-EXIT                 |" << std::endl;
	std::cout << "+-----------------------------------------+" << std::endl;
}

void	PhoneBook::ft_add(void)	
{
	Contact	contact;

	std::string input;
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
	this->_contacts[this->_cur % 8] = contact;
	this->_cur++;
	if (this->_cur <= 8)
		this->_idx = this->_cur;
	std::cout << "Successfully added" << std::endl;
}

std::string	ft_resize(std::string s)
{
	if (s.length() > 10)
	{
		return (s.substr(0, 9) + ".");
	}
	return (s);
}

void	PhoneBook::ft_display_contact(void)
{
	unsigned int	i;

	i = 0;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	while (i < this->_idx)
	{
		std::cout
		<< "|" << std::setw(10) << i
		<< "|" << std::setw(10) << ft_resize(_contacts[i].get_first_name())
		<< "|" << std::setw(10) << ft_resize(_contacts[i].get_last_name())
		<< "|" << std::setw(10) << ft_resize(_contacts[i].get_nick_name())
		<< "|" <<
		std::endl;
		i++;
	}
}

void	PhoneBook::ft_search(void)
{
	unsigned int	i;

	PhoneBook::ft_display_contact();
	std::cout << "Enter an index" << std::endl;
	std::cin >> i;
	if (std::cin.good())
	{
		if (i < this->_idx)
		{
			std::cout << "First Name: " << this->_contacts[i].get_first_name() << std::endl;
			std::cout << "Last Name: " << this->_contacts[i].get_last_name() << std::endl;
			std::cout << "Nick Name: " << this->_contacts[i].get_nick_name() << std::endl;
			std::cout << "Dark Secret: " << this->_contacts[i].get_darkest_secret() << std::endl;
			std::cout << "Phone Number: " << this->_contacts[i].get_phone_number() << std::endl;
		}
		else
			std::cout << "Invalid index" << std::endl;
	}
	else if (std::cin.fail())
	{
		std::cout << "Invalid index" << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	
}

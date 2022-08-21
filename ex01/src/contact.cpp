/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 20:43:47 by steh              #+#    #+#             */
/*   Updated: 2022/08/21 19:49:31 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact(void)
{
	this->_first_name = "null";
	this->_last_name = "null";
	this->_nickname = "null";
	this->_darkest_secret = "null";
	this->_phone_number = "null";
}

Contact::~Contact(void)
{
	return ;
}

std::string	Contact::get_first_name(void) const
{
	return (this->_first_name);
}

std::string	Contact::get_last_name(void) const
{
	return (this->_last_name);
}

std::string	Contact::get_nick_name(void) const
{
	return (this->_nickname);
}

std::string	Contact::get_darkest_secret(void) const
{
	return (this->_darkest_secret);
}

std::string	Contact::get_phone_number(void) const
{
	return (this->_phone_number);
}

void	Contact::set_first_name(std::string firstname)
{
	this->_first_name = firstname;
}

void	Contact::set_last_name(std::string lastname)
{
	this->_last_name = lastname;
}

void	Contact::set_nick_name(std::string nickname)
{
	this->_nickname = nickname;
}

void	Contact::set_darkest_secret(std::string dark_secret)
{
	this->_darkest_secret = dark_secret;
}

void	Contact::set_phone_number(std::string phone_number)
{
	this->_phone_number = phone_number;
}

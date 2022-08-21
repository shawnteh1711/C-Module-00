/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 20:56:15 by steh              #+#    #+#             */
/*   Updated: 2022/08/21 19:49:10 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream> // std::cout, std::endl
#include <iomanip> // std:setw
#include "contact.hpp"

class PhoneBook
{
	private:
		unsigned int	_idx;
		unsigned int	_cur;
		Contact	_contacts[8];

	public:
		PhoneBook(void);
		~PhoneBook(void);
		void	ft_display(void);
		void	ft_add(void);
		void	ft_search(void);
		void	ft_display_contact(void);
};

#endif

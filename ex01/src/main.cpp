/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 20:03:15 by steh              #+#    #+#             */
/*   Updated: 2022/08/21 19:48:56 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"

int main(void)
{
	int			x;
	PhoneBook	phonebook;

	while (42)
	{
		phonebook.ft_display();
		std::cout << "Type a number" << std::endl;
		std::cin >> x;
		if (x == 1)
		{
			phonebook.ft_add();
			continue ;
		}
		else if (x == 2)
		{
			phonebook.ft_search();
			continue ;
		}
		else if (x == 3)
		{
			std::cout << "Good Bye" << std::endl;
			break ;
		}
		else
		{
			std::cout << "Option not found" << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			continue ;
		}
		return 0;
	}
	
}

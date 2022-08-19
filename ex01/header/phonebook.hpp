/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 20:56:15 by steh              #+#    #+#             */
/*   Updated: 2022/08/19 20:29:25 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "contact.hpp"

class Phonebook
{
	private:
		int		_idx;
		Contact	_contacts[8];

	public:
		Phonebook();
		~Phonebook();
		void	ft_display();
		void	ft_add();
		void	ft_search();
		void	ft_exit();
};

#endif

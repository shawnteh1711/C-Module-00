/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 20:55:28 by steh              #+#    #+#             */
/*   Updated: 2022/08/19 20:54:29 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact
{
	private:
		int				_id;
		std::string		_first_name;
		std::string		_last_name;
		std::string		_nickname;
		std::string		_darkest_secret;
		std::string		_phone_number;

	public:
		Contact();
		~Contact();
		std::string		get_first_name();
		std::string		get_last_name();
		std::string		get_nick_name();
		std::string		get_darkest_secret();
		std::string		get_phone_number();
		void			set_first_name(std::string firstname);
		void			set_last_name(std::string lastname);
		void			set_nick_name(std::string nickname);
		void			set_darkest_secret(std::string darkestsecret);
		void 			set_phone_number(std::string phonenumber);
};

#endif

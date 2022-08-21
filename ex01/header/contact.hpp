/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 20:55:28 by steh              #+#    #+#             */
/*   Updated: 2022/08/21 19:49:25 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact
{
	private:
		std::string		_first_name;
		std::string		_last_name;
		std::string		_nickname;
		std::string		_darkest_secret;
		std::string		_phone_number;

	public:
		Contact(void);
		~Contact(void);
		std::string		get_first_name(void) const;
		std::string		get_last_name(void) const;
		std::string		get_nick_name(void) const;
		std::string		get_darkest_secret(void) const;
		std::string		get_phone_number(void) const;
		void			set_first_name(std::string firstname);
		void			set_last_name(std::string lastname);
		void			set_nick_name(std::string nickname);
		void			set_darkest_secret(std::string darkestsecret);
		void 			set_phone_number(std::string phonenumber);
};

#endif

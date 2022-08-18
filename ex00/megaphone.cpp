/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 17:12:58 by steh              #+#    #+#             */
/*   Updated: 2022/08/18 18:00:50 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int argc, char const *argv[])
{
	(void)argc;
	(void)argv;
	int	i;

	i = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (argv[i] != NULL)
		{
			while (*argv[i])
				std::cout << (char)std::toupper(*(argv[i])++);
			std::cout << " ";
			i++;
		}
		std::cout << std::endl;
	}
	return (0);
}

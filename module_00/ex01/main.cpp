/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguerrer </var/mail/aguerrer>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 19:13:52 by aguerrer          #+#    #+#             */
/*   Updated: 2021/08/11 20:01:20 by aguerrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

static void	header(void)
{
	std::cout << "Command Available -> ADD, SEARCH, EXIT" << std::endl;
	std::cout << "$> ";
}

int	main(void)
{
	std::string cmd;
	PhoneBook phonebook;
	while (1)
	{
		header();
		if (std::cin.eof() != 0)
			return (0);
		std::getline(std::cin, cmd);
		if (!cmd.compare("EXIT"))
			return (0);
		else if (!cmd.compare("ADD"))
			phonebook.AddContact();
		else if (!cmd.compare("SEARCH"))
			phonebook.SearchContact();
		else
			std::cout << "Wrong input" << std::endl;
	}
	return (0);
}

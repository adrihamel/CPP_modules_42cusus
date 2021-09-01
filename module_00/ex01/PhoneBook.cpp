/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguerrer </var/mail/aguerrer>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 19:29:14 by aguerrer          #+#    #+#             */
/*   Updated: 2021/08/11 20:15:34 by aguerrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	count = 0;
}

PhoneBook::~PhoneBook(){}

void	PhoneBook::AddContact()
{
	if (count == 8)
	{
		std::cout << "PhoneBook is full" << std::endl;
		count--;
	}
	contactList[count].AddFirstName();
	contactList[count].AddLastName();
	contactList[count].AddNickName();
	contactList[count].AddPhoneNumber();
	contactList[count].AddDarkestSecret();
	if (count != 8)
		count++;
}

void	PhoneBook::SearchContact()
{
    int index;
	int	i;
    std::string str;

	std::cout << std::setw(10) << "index" << '|'
		<< std::setw(10) << "first name" << '|'
		<< std::setw(10) << "last name" << '|'
		<< std::setw(10) << "nickname" << std::endl;
	i = 0;
	while (i < count)
	{
		contactList[i].PrintInfo(i + 1);
		i++;
	}
    std::cout << "\nEnter index: ";
	std::getline(std::cin, str);
	if (str.length() != 1 && !isdigit(str[0]))
	{
		std::cout << "Wrong input" << std::endl;
		return ;
	}
	index = str[0] - '0';
	if (index < 1 || index > count || index > 8)
	{
		std::cout << "Wrong index" << std::endl;
		return ;
	}
	else
		contactList[index - 1].PrintList();
}

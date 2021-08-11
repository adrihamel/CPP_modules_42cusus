/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguerrer </var/mail/aguerrer>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 19:17:24 by aguerrer          #+#    #+#             */
/*   Updated: 2021/08/11 20:01:35 by aguerrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iomanip>

class PhoneBook
{
	private:
		Contact contactList[8];		//max 8 contacts
		int count;
	public:
		PhoneBook();
		~PhoneBook();

		void	AddContact();
		void	SearchContact();
	
};

#endif

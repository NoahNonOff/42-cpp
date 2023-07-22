/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 13:41:34 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/07/17 15:21:48 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>

class Contact {
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	secret;
	public:
		void	modified_info(int type);
		std::string	give_info(int code);
		void	print_user_info(void);
};

class PhoneBook {
	public:
		int	nb_contact;
		int	idx;
		void	add_user(void);
		void	print_index(void);
		void	search_user(void);
	private:
		Contact	tab[8];
};

#endif

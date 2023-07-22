/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 14:41:06 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/07/20 10:00:28 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

std::string	Contact::give_info(int code)
{
	if (code == 1)
		return (this->first_name);
	else if (code == 2)
		return (this->last_name);
	else if (code == 3)
		return (this->nickname);
	else if (code == 4)
		return (this->phone_number);
	return (this->secret);
}

void	write_max(std::string str, int max)
{
	int	len = str.length();

	for (int i = 0; i < max; i++)
	{
		if (i >= len)
			std::cout << " ";
		else if (i == 9 && len > 10)
			std::cout << ".";
		else
			std::cout << str[i];
	}
}

void	PhoneBook::print_index(void)
{
	for (int i = 0; i < this->nb_contact; i++)
	{
		std::cout << (i + 1) << "         |";
		write_max(this->tab[i].give_info(1), 10);
		std::cout << "|";
		write_max(this->tab[i].give_info(2), 10);
		std::cout << "|";
		write_max(this->tab[i].give_info(3), 10);
		std::cout << std::endl;
	}
}

void	Contact::print_user_info(void)
{
	std::cout << "first name: " << this->first_name << std::endl;
	std::cout << "last name: " << this->last_name << std::endl;
	std::cout << "nickname: " << this->nickname << std::endl;
	std::cout << "phone number: " << this->phone_number << std::endl;
	std::cout << "darkest secret: " << this->secret << std::endl;
}

void	PhoneBook::search_user(void)
{
	int	num;
	std::string	answer;

	if (!this->nb_contact)
	{
		std::cout << "error: no contact yet" << std::endl;
		return ;
	}
	this->print_index();
	while (1)
	{
		std::cout << "select index: ";
		std::getline(std::cin, answer);
		if (answer.length() != 1)
			continue ;
		num = answer[0] - 48;
		if (num <= this->nb_contact && num > 0)
			break ;
	}
	std::cout << std::endl;
	this->tab[num - 1].print_user_info();
}



/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 11:52:25 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/07/17 15:31:18 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	print_prompt(PhoneBook &rep)
{
	std::cout << "\x1B[36m\x1B[1m" << rep.nb_contact << " ➜ \x1B[0m";
}

std::string	wait_answer(std::string question)
{
	std::string	answer;

	while (1)
	{
		std::cout << question << ": ";
		std::getline(std::cin, answer);
		if (answer.length())
			break ;
	}
	return (answer);
}

void	Contact::modified_info(int code)
{
	if (code == 1)
		this->first_name = wait_answer("first name");
	else if (code == 2)
		this->last_name = wait_answer("last name");
	else if (code == 3)
		this->nickname = wait_answer("nickname");
	else if (code == 4)
		this->phone_number = wait_answer("phone number");
	else if (code == 5)
		this->secret = wait_answer("deppest secret");
}

void	PhoneBook::add_user(void)
{
	int	idx;

	this->idx++;
	idx = this->idx;
	this->nb_contact++;
	if (nb_contact > 8)
		this->nb_contact = 8;
	this->tab[idx % 8].modified_info(1);
	this->tab[idx % 8].modified_info(2);
	this->tab[idx % 8].modified_info(3);
	this->tab[idx % 8].modified_info(4);
	this->tab[idx % 8].modified_info(5);
}

int	main(void)
{
	PhoneBook	rep;
	std::string	line;

	rep.idx = -1;
	rep.nb_contact = 0;
	while (1)
	{
		print_prompt(rep);
		std::getline(std::cin, line);
		if (!line.compare("EXIT"))
			return (0);
		else if (!line.compare("ADD"))
			rep.add_user();
		else if (!line.compare("SEARCH"))
			rep.search_user();
	}
	return (0);
}

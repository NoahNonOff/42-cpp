/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 14:11:40 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/09/14 11:09:02 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOIN_EXCHANGE_HPP
# define BITCOIN_EXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <sstream>
# include <string>
# include <map>

# define to_str( s ) # s

class BitExchange {
	private:
		std::map<std::string, double> _data;

	public:
		BitExchange();
		~BitExchange();
		BitExchange(BitExchange const &other);
		BitExchange	&operator=(BitExchange const &other);

		std::map<std::string, double>	getData(void) const;
		double	findExchange(std::string const &date, double value);
};

/* =================== protos =================== */
double	stod(std::string const &str);
void	bitExchange(std::string const &fileName);

#endif
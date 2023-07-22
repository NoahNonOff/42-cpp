/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 13:32:39 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/07/22 15:53:56 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

# include <iostream>
# include <fstream>
# include <sstream>
# include <string>

# define STR std::string
# define IFS std::ifstream
# define OFS std::ofstream

void	replacer(STR& s1, STR& s2, STR& nameFile, STR& nameOutFile);
inline bool	exist(const std::string& name);

#endif

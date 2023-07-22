/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 13:28:26 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/07/22 15:59:18 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

inline bool	exist(const std::string& name) {
	IFS	f(name.c_str());
	return f.good();
}

void	replacer(STR& s1, STR& s2, STR& nameFile, STR& nameOutFile) {
	STR	line;
	STR	file;
	IFS	f_in(nameFile.c_str());
	OFS	f_out(nameOutFile.c_str());

	while (std::getline(f_in, line)) {
		file.append(line);
		file.push_back('\n');
	}
	int	i = 0;
	while (file[i]) {
		if (file[i] == s1[0]) {
			int j = 0;
			while (s1[j] && file[i + j] && s1[j] == file[i + j])
				j++;
			if (!s1[j]) {
				f_out << s2;
				i += j;
				continue ;
			}
		}
		f_out << file[i];
		i++;
	}
}

int	main(int ac, char **av)
{
	STR	s1;
	STR	s2;
	STR	file;
	STR	out_file;

	if (ac != 4) {
		std::cerr << "syntax error:" << std::endl;
		std::cerr << "./replace <filename> <string1> <string2>" << std::endl;
		return 1;
	}
	file = av[1];
	if (!exist(file)) {
		std::cerr << "error: " << out_file << ": no such file or directory" << std::endl;
		return 1;
	}
	out_file = file;
	out_file.append(".replace");
	s1 = av[2];
	s2 = av[3];
	if (s1.empty() || s2.empty()) {
		std::cerr << "error: string cannot be empty" << std::endl;
		return 1;
	}
	replacer(s1, s2, file, out_file);
	std::cout << "oK." << std::endl;
	return 0;
}

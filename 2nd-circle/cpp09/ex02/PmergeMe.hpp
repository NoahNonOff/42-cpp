/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 13:28:26 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/09/14 17:41:01 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <algorithm>
# include <string>
#include <ctime>
#include <cstdlib>
# include <deque>
# include <vector>

class PmergeMe {
	private:
		std::deque<int>			_Deque;
		std::vector<int>		_Vector;
		static const bool		_show = false;

	public:
		PmergeMe();
		~PmergeMe();
		PmergeMe(int ac, char *av[]);
		PmergeMe(PmergeMe const &other);
		PmergeMe	&operator=(PmergeMe const &other);

		std::deque<int>		getDeque() const;
		std::vector<int>	getVector() const;

		void	ImergeSortDeque(std::deque<int> &arr);
		void	mergeDeque(std::deque<int> &leftArr, std::deque<int> &rightArr, std::deque<int> &arr);

		void	ImergeSortVector(std::vector<int> &arr);
		void	mergeVector(std::vector<int> &leftArr, std::vector<int> &rightArr, std::vector<int> &arr);

		void	sort(void);
};

template <typename T>

void	display(T const &container, bool show);
bool	checkArgs(char *av[]);

#endif
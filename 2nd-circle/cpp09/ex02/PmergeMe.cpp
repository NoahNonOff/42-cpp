/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <nbeaufil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 13:28:24 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/09/14 17:41:43 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

/* ================================= utils ================================= */

bool	checkArgs(char *av[]) {

	for (int i = 1; av && av[i]; i++)
		for (int j = 0; av[i][j]; j++)
			if (!isdigit(av[i][j]))
				return false;
	return true;
}

/* ================================= class ================================= */

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(int ac, char *av[]) {

	for (int i = 1; i < ac; ++i) {

		int	value = atoi(av[i]);
		_Deque.push_back(value);
		_Vector.push_back(value);
	}
}

PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe(PmergeMe const &other) { *this = other; }

PmergeMe	&PmergeMe::operator=(PmergeMe const &other) {

	if (this != &other) {
		this->_Deque = other.getDeque();
		this->_Vector = other.getVector();
	}
	return *this;
}

std::deque<int>		PmergeMe::getDeque() const { return this->_Deque; }

std::vector<int>	PmergeMe::getVector() const { return this->_Vector; }

/* ----------------- Deque ----------------- */
void	PmergeMe::ImergeSortDeque(std::deque<int> &arr) {

	int	length = arr.size();
	if (length < 2)
		return ;

	int	middle = length / 2;
	std::deque<int>	leftDequeu;
	std::deque<int>	rightDequeu;

	for (int i = 0; i < length; i++) {
		if (i < middle)
			leftDequeu.push_back(arr[i]);
		else
			rightDequeu.push_back(arr[i]);
	}
	this->ImergeSortDeque(leftDequeu);
	this->ImergeSortDeque(rightDequeu);
	this->mergeDeque(leftDequeu, rightDequeu, arr);
}

void	PmergeMe::mergeDeque(std::deque<int> &leftArr, std::deque<int> &rightArr, std::deque<int> &arr) {

	int	leftSize = arr.size() / 2;
	int	rightSize = arr.size() - leftSize;
	int	i = 0, l = 0, r = 0;

	while (l < leftSize && r < rightSize) {

		if (leftArr[l] < rightArr[r])
			arr[i++] = leftArr[l++];
		else
			arr[i++] = rightArr[r++];
	}
	while (l < leftSize)
		arr[i++] = leftArr[l++];

	while (r < rightSize)
		arr[i++] = rightArr[r++];
}

/* ----------------- List ------------------ */
void	PmergeMe::ImergeSortVector(std::vector<int> &arr) {

	int	length = arr.size();
	if (length < 2)
		return ;

	int	middle = length / 2;
	std::vector<int>	leftVector;
	std::vector<int>	rightVector;

	for (int i = 0; i < length; i++) {
		if (i < middle)
			leftVector.push_back(arr[i]);
		else
			rightVector.push_back(arr[i]);
	}
	this->ImergeSortVector(leftVector);
	this->ImergeSortVector(rightVector);
	this->mergeVector(leftVector, rightVector, arr);
}

void	PmergeMe::mergeVector(std::vector<int> &leftArr, std::vector<int> &rightArr, std::vector<int> &arr) {

	int	leftSize = arr.size() / 2;
	int	rightSize = arr.size() - leftSize;
	int	i = 0, l = 0, r = 0;

	while (l < leftSize && r < rightSize) {

		if (leftArr[l] < rightArr[r])
			arr[i++] = leftArr[l++];
		else
			arr[i++] = rightArr[r++];
	}
	while (l < leftSize)
		arr[i++] = leftArr[l++];

	while (r < rightSize)
		arr[i++] = rightArr[r++];
}

void	PmergeMe::sort(void) {

	std::cout << "Before: "; display(_Deque, _show);

	clock_t	start, end;
	double	time1, time2;

	/* sort the deque */
	start = clock();
	this->ImergeSortDeque(_Deque);
	end = clock();
	time1 = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000;

	/* sort the list */
	start = clock();
	this->ImergeSortVector(_Vector);
	end = clock();
	time2 = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000;

	/* write the result */
	std::cout << "After: "; display(_Deque, _show);

	std::cout << "Time to process a range of " << _Deque.size() << \
	" elements with std::deque container: " << time1 << " us" << std::endl;

	std::cout << "Time to process a range of " << _Vector.size() << \
	" elements with std::vector container: " << time2 << " us" << std::endl;
}


/* ========================================================================= */

template <typename T>

void	display(T const &container, bool show) {

	typename T::const_iterator	it;

	int	i = 0;
	for (it = container.begin(); it != container.end(); ++it) {
		if (!show && i++ > 5) {
			std::cout << "[...]";
			break ;
		}
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbeaufil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 07:23:26 by nbeaufil          #+#    #+#             */
/*   Updated: 2023/07/20 12:31:57 by nbeaufil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(void) {}
Account::Account(int initial_deposit) // Constructor
{
	this->_totalAmount += initial_deposit;
	this->_accountIndex = _nbAccounts++;
	this->_amount = initial_deposit;
	this->_nbWithdrawals = 0;
	this->_nbDeposits = 0;

	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "created" << std::endl;
}

Account::~Account(void) // Destructor
{
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "closed" << std::endl;
}

/* ============== get =============== */
int  Account::getNbWithdrawals(void) {return (t::_totalNbWithdrawals);}
int  Account::getNbDeposits(void) {return (t::_totalNbDeposits);}
int  Account::getTotalAmount(void) {return (t::_totalAmount);}
int  Account::getNbAccounts(void) {return (t::_nbAccounts);}

/* ================================== */
void	Account::displayAccountsInfos(void)
{
	t::_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";";
	std::cout << "total:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";";
	std::cout << "withdrawals:" << getNbWithdrawals() << ";";
	std::cout << std::endl;
}

void    Account::_displayTimestamp(void)
{
    time_t now = time(0);
    tm *ltm = localtime(&now);

    std::cout << "[";
    std::cout << 1900 + ltm->tm_year;
    if (ltm->tm_mon + 1 < 10)
        std::cout << "0";
    std::cout << ltm->tm_mon + 1;
    if (ltm->tm_mday < 10)
        std::cout << "0";
    std::cout << ltm->tm_mday << "_";
    if (ltm->tm_hour < 10)
        std::cout << "0";
    std::cout << ltm->tm_hour;
    if (ltm->tm_min < 10)
        std::cout << "0";
    std::cout << ltm->tm_min;
    if (ltm->tm_sec < 10)
        std::cout << "0";
    std::cout << ltm->tm_sec << "]";
	std::cout << " ";
}

void	Account::makeDeposit(int deposit)
{
	this->_nbDeposits++;

	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	this->_amount += deposit;
	std::cout << "deposits:" << deposit << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_deposits:" << this->_nbDeposits << ";";
	std::cout << std::endl;

	this->_totalAmount += deposit;
	this->_totalNbDeposits++;
}

int		Account::checkAmount(void) const {return (this->_amount);}

bool	Account::makeWithdrawal(int withdrawal)
{
	if (this->checkAmount() < withdrawal)
	{
		this->_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";";
		std::cout << "p_amount:" << this->_amount << ";";
		std::cout << "withdrawal:refused;" << std::endl;
		return (false);
	}

	t::_totalAmount -= withdrawal;
	t::_totalNbWithdrawals++;
	this->_nbWithdrawals++;

	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	this->_amount -= withdrawal;
	std::cout << "withdrawal:" << withdrawal << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_withdrawals:" << this->_nbWithdrawals << ";";
	std::cout << std::endl;

	return (true);
}

void	Account::displayStatus(void) const
{
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << ";";
    std::cout << std::endl;
}


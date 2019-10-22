/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 09:48:59 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/21 11:59:53 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include "Account.class.hpp"

int Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) {
	this->_accountIndex = this->_nbAccounts;
	this->_nbAccounts++;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << "index: " << this->_accountIndex << " - "
	<< "amount: " << this->_amount << " created" <<  std::endl;
}

Account::~Account(void) 
{
	Account::_displayTimestamp();
	std::cout << "account: " << this->_accountIndex << " closed" <<  std::endl;
}

void Account::makeDeposit(int deposit)
{
	this->_amount += deposit;
	this->_nbDeposits++;
	this->_totalAmount += deposit;
	this->_totalNbDeposits++;
	Account::_displayTimestamp();
	std::cout << "index: " << this->_accountIndex << " - "
				<< "deposit: " <<  deposit << " - "
				<< "amount: " << this->_amount << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	if (this->_amount < withdrawal)
	{
		Account::_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << " - "
					<< "amount:" << this->_amount << " - "
					<< "withdrawal refused" << std::endl;
		return false;
	}
	this->_amount -= withdrawal;
	this->_totalAmount -= withdrawal;
	this->_nbWithdrawals++;
	this->_totalNbWithdrawals++;
	Account::_displayTimestamp();
	std::cout << "account: " << this->_accountIndex  << " - "
				<< "withdrawal: " << withdrawal << " - "
				<< "amount: " << this->_amount << " - "
				<< "nb_withdrawals: " << this->_nbWithdrawals << std::endl;
	return true;
}

int Account::checkAmount(void) const
{
	return this->_amount;
}

void Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "account: " << this->_accountIndex << " - "
				<< "amount: " << this->_amount << " - "
				<< "deposits:" << this->_nbDeposits << " - "
				<< "withdrawals: " << this->_nbWithdrawals << std::endl;
}

int Account::getNbAccounts(void)
{
	return Account::_nbAccounts;
}

int Account::getTotalAmount(void)
{
	return Account::_totalAmount;
}

int Account::getNbDeposits(void)
{
	return Account::_totalNbDeposits;
}

int Account::getNbWithdrawals(void)
{
	return Account::_totalNbWithdrawals;
}

void Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts: " << Account::getNbAccounts() << " - "
				<< "total amount: " << Account::getTotalAmount() << " - "
				<< "deposits: " << Account::getNbDeposits() << " - "
				<< "withdrawals: " << Account::getNbWithdrawals() << std::endl;
}

void Account::_displayTimestamp(void)
{
	char str[19];
	std::time_t time = std::time(nullptr);

	std::strftime(str, sizeof(str), "[%Y%m%d_%H%M%S] ", std::localtime(&time));
	std::cout << str;
}
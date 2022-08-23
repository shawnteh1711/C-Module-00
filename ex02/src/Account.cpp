/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: steh <steh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 20:00:16 by steh              #+#    #+#             */
/*   Updated: 2022/08/23 17:22:30 by steh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

struct str
{
	std::string string;
};

str		classes[100];
int		classes_max = 0;
int		classes_index = 0;
// index:0;amount:42;created
Account::Account(int initial_deposit)
{
	this->_amount = initial_deposit;
	this->_accountIndex = this->_nbAccounts++;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	classes_max++;
	Account::_totalAmount += initial_deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "created" << std::endl;
	return ;
}

//[19920104_091532] index:7;amount:8942;closed
Account::~Account(void)
{
	classes_index++;
	classes[classes_index].string = "index:" + std::to_string(_accountIndex) + ";amount:" + std::to_string(_amount) + ";closed";
	if (classes_index == classes_max)
	{
		for (int i = classes_max; i > 0; i--)
		{
			_displayTimestamp();
			std::cout << classes[i].string << std::endl;
		}
	}
	// Account::_displayTimestamp();
	// this->_nbAccounts--;
	// std::cout << "index:" << this->_accountIndex << ";";
	// std::cout << "amount:" << this->_amount << ";";
	// std::cout << "closed" << std::endl;
}

int		Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
}

int		Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}

int		Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}

int		Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
}

//accounts:8;total:20049;deposits:0;withdrawals:0
void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";";
	std::cout << "total:" << Account::_totalAmount << ";";
	std::cout << "deposits:" << Account::_totalNbDeposits << ";";
	std::cout << "withdrawals:" << Account::_totalNbWithdrawals << std::endl;

	return ;
}

// https://en.cppreference.com/w/cpp/chrono/time_point
// std::chrono::time_point<std::chrono::system_clock> now = std::chrono::system_clock::now();
// std::time_t	time_now = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
// std::cout << "[19920104_091532] ";
void	Account::_displayTimestamp(void)
{

	time_t time_now = time(NULL);
	tm time = *localtime(&time_now);

	std::cout
	<< std::setfill('0') 
	<< "[" 
	<< (time.tm_year + 1900)
	<< std::setw(2) << (time.tm_mon + 1)
	<< std::setw(2) << time.tm_mday 
	<< "_"
	<< std::setw(2) << time.tm_hour
	<< std::setw(2) << time.tm_min
	<< std::setw(2) << time.tm_sec 
	<< "] ";
}

//index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1
void	Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	std::cout << "deposit:" << deposit << ";";
	this->_amount += deposit;
	std::cout << "amount:" << this->_amount << ";";
	this->_nbDeposits++;
	Account::_totalNbDeposits++;
	Account::_totalAmount += deposit;
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
}

// [19920104_091532] index:0;p_amount:47;withdrawal:refused
// [19920104_091532] index:1;p_amount:819;withdrawal:34;amount:785;nb_withdrawals:1
bool	Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	if (this->_amount < withdrawal)
	{
		std::cout << "withdrawal:refused" << std::endl;
		return (false);
	}
	else
		this->_amount -= withdrawal;
	std::cout << "withdrawal:" << withdrawal << ";";
	std::cout << "amount:" << this->_amount << ";";
	this->_nbWithdrawals++;
	Account::_totalNbWithdrawals++;
	Account::_totalAmount -= withdrawal;
	std::cout << "nb_deposits:" << this->_nbWithdrawals << std::endl;
	return (true);
}

int		Account::checkAmount(void) const
{
	return (this->_amount > 0);
}

//[19920104_091532] index:0;amount:47;deposits:1;withdrawals:0
void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

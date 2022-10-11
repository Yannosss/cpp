#include "Account.hpp"
#include <vector>
#include <algorithm>
#include <functional>
#include <iostream>

	int Account::_nbAccounts = 0;
	int	Account::_totalAmount = 0;
	int	Account::_totalNbDeposits = 0;
	int	Account::_totalNbWithdrawals = 0;

	Account::Account( int initial_deposit )
	{
		//std::cout << "creation " << Account::_nbAccounts << " \n";
		Account::_displayTimestamp();
		std::cout << "index:" << Account::_nbAccounts;
		std::cout << ";amount:" << initial_deposit;
		std::cout << ";created\n";
		this->_accountIndex = _nbAccounts;
		this->_amount = initial_deposit;
		this->_nbDeposits = 0;
		this->_nbWithdrawals = 0;
		Account::_totalAmount += initial_deposit;
		Account::_nbAccounts++;

	}
	Account::~Account( void )
	{

	}
	Account::Account( void )
	{

	}


	int	Account::getNbAccounts( void )
	{
		return(Account::_nbAccounts);
	}
	int	Account::getTotalAmount( void )
	{
		return(0);

	}
	int	Account::getNbDeposits( void )
	{
		return(0);

	}
	int	Account::getNbWithdrawals( void )
	{
		return(0);

	}
	void	Account::displayAccountsInfos( void )
	{
		//[19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0
		Account::_displayTimestamp();
		std::cout << "accounts:" << Account::_nbAccounts;
		std::cout << ";total:" << Account::_totalAmount;
		std::cout << ";deposits:" << Account::_totalNbDeposits;
		std::cout << ";withdrawals:" << Account::_totalNbWithdrawals;
		std::cout << "\n";
	}
	void	Account::makeDeposit( int deposit )
	{
//[19920104_091532] index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1
		Account::_displayTimestamp();
		std::cout << "index:" << this->_accountIndex;
		std::cout << ";p_amount:" << this->_amount;
		std::cout << ";deposit:" << deposit;
		this->_amount += deposit;
		std::cout << ";amount:" << this->_amount;
		this->_nbDeposits += 1;
		std::cout << ";nb_deposits:" << this->_nbDeposits;
		std::cout << "\n";
		Account::_totalAmount += deposit;

	}
	bool	Account::makeWithdrawal( int withdrawal )
	{
		return(true);
	}
	int		Account::checkAmount( void ) const
	{
		return (0);
	}
	void	Account::displayStatus( void ) const
	{
//[19920104_091532] index:0;amount:42;deposits:0;withdrawals:0
		std::cout << "index:" << this->_accountIndex;
		std::cout << ";amount:" << this->_amount;
		std::cout << ";deposits:" << this->_nbDeposits;
		std::cout << ";withdrawals:" << this->_nbWithdrawals;
		std::cout << "\n";
	}
	void	Account::_displayTimestamp( void )
	{
		std::cout << "[time] ";
		
	}

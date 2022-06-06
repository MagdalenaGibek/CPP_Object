#pragma once
#include <string>
class Account {
	int balance = 0;
	std::string number;
	std::string generateBankNumber(); 

public:
	Account();
	Account(std::string number);
	Account(const Account& old);
	int withdraw(int amount);
	void deposit(int amount);
	int getBalance();
};
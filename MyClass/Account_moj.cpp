#include "Account_moj.hpp"
#include <string>
#include <iostream>


std::string Account::generateBankNumber()
{
    return "11112223333";
}

Account::Account()
{
    this->number = generateBankNumber();
}

Account::Account(std::string number)
{
    this->number = number;
}

Account::Account(const Account& old)
{
    this->balance = old.balance;
    this->number = old.number;

}

int Account::withdraw(int amount)
{
    if (amount > 0)
    {
        if (amount > balance)
        {
            amount = balance;
        }
        balance -= amount;
        return amount;
    }
    else
    {
        return 0;
    }
     
}

void Account::deposit(int amount)
{
    if (amount > 0)
    {
        balance += amount;
    }
    else
    {
        std::cout << "Nie można wpłacić ujemnej kwoty."<<std::endl;
    }
}

int Account::getBalance()
{
    return balance;
}

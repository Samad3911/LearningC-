/*
 * bankaccount.cpp
 *
 *  Created on: 03-Jul-2021
 *      Author: abdul
 */

#include "bankaccount.h"

BankAccount::BankAccount(string owner)
{
	this->m_Owner = owner;
	this->m_Balance = 0;
}

BankAccount::BankAccount(string owner, int balance)
{
	this->m_Owner = owner;
	this->m_Balance = balance;
}

void BankAccount::deposit(int amount)
{
	m_Balance+= amount;
}
void BankAccount::withdraw(int amount)
{
	if(amount > m_Balance)
	{
		cout<<"Your account doesn't contains this much balance\n";
	}
	else
	{
		m_Balance-=amount;
	}
}

string BankAccount::getowner()
{
	return m_Owner;
}

int BankAccount::getbalance()
{
	return m_Balance;
}

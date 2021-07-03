/*
 * bankaccount.h
 *
 *  Created on: 03-Jul-2021
 *      Author: abdul
 */

#ifndef BANKACCOUNT_H_
#define BANKACCOUNT_H_

#include <iostream>
#include <string>

using namespace std;

class BankAccount
{
private:
	string m_Owner;
	int m_Balance;

public:
	BankAccount(string owner);
	BankAccount(string owner, int balance);
	void deposit(int amount);
	void withdraw(int amount);
	string getowner();
	int getbalance();
};



#endif /* BANKACCOUNT_H_ */

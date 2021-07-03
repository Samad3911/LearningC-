/*
 * main.cpp
 *
 *  Created on: 03-Jul-2021
 *      Author: abdul
 */

#include <iostream>
#include "bankaccount.h"

using namespace std;

int main()
{
  BankAccount a1("Abdul");
  a1.deposit(60000);
  a1.withdraw(607000);
  cout<<"Balance is "<<a1.getbalance()<<endl;
  a1.withdraw(7000);
  cout<<"Owner is "<<a1.getowner()<<endl;
  cout<<"Balance is "<<a1.getbalance()<<endl;

  BankAccount a2("Josh");
  a2.deposit(600000);
  a2.deposit(10000);
  cout<<"Balance is "<<a2.getbalance()<<endl;
  a2.withdraw(7000);
  cout<<"Owner is "<<a2.getowner()<<endl;
  cout<<"Balance is "<<a2.getbalance()<<endl;

  return 0;
}



/* Assignment C++: 1
   Author: Shiri Nisser, ID 209323658,
		   Oren Lowte, ID: 313321580:
*/
#include <iostream>
#pragma once
using namespace std;

class CashRegister {
private:
	int cashOnHands;
public:
	CashRegister();
	CashRegister(int money);
	int getCurrentBalance();
	void acceptAmount(int a);
	~CashRegister() {};



};
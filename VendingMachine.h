/* Assignment C++: 1
   Author: Shiri Nisser, ID 209323658,
*/
#include <iostream>
#include "DispenserType.h"
#include "CashRegister.h"
#pragma once

using namespace std;
class vendingmachine {
private:
	DispenserType  orange;
	DispenserType  carrot;
	DispenserType  pomegranate;
	CashRegister moeny;
public:
	vendingmachine();
	void sellproduct(char fruit);
	~vendingmachine() {}
};
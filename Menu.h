/* Assignment C++: 1
   Author: Shiri Nisser, ID 209323658,
		   Oren Lowte, ID: 313321580:
*/
#include <iostream>
#include "CashRegister.h"
#include "VendingMachine.h"
#include "DispenserType.h"
#include "Stack.h"
#include "StackNode.h"
#pragma once

using namespace std;
class Menu {
private:
public:
	void mainMenu();
	void shopMenu();
	void stackMenu();

	~Menu() {};

};
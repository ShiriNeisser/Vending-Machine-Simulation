/* Assignment C++: 1
   Author: Shiri Nisser, ID 209323658,
		   Oren Lowte, ID: 313321580:
*/
#include "VendingMachine.h"
vendingmachine::vendingmachine() : orange(10, 45), carrot(5, 50), pomegranate(4, 75)
{

	//counter(0)
}
void vendingmachine::sellproduct(char fruit)
{
	int get_number_of_item = 0;
	int cost = 0;
	int claint_payment;
	int remainder_claint_payment;

	if (fruit == 'o')
	{
		get_number_of_item = orange.getNoOfItems();
		cost = orange.getCost();
	}
	else if (fruit == 'c')
	{
		get_number_of_item = carrot.getNoOfItems();
		cost = carrot.getCost();
	}
	else if (fruit == 'p')
	{
		get_number_of_item = pomegranate.getNoOfItems();
		cost = pomegranate.getCost();
	}
	if (get_number_of_item == 0)
	{
		cout << "The item is sold" << endl;
	}
	else
	{
		cout << "Please deposit " << cost << " cent" << endl;
		cin >> claint_payment;
		if (claint_payment >= cost)
		{
			cout << "Collect your item at the bottomand enjoy." << endl;
			cout << "* -*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
			if (fruit == 'o') orange.makeSale();
			else if (fruit == 'c') carrot.makeSale();
			else if (fruit == 'p') pomegranate.makeSale();
		}
		else
		{
			remainder_claint_payment = claint_payment;
			cout << "Please deposit another " << (cost - remainder_claint_payment) << " cent" << endl;
			cin >> claint_payment;
			if (cost <= (remainder_claint_payment + claint_payment))
			{
				cout << "Collect your item at the bottomand enjoy." << endl;
				cout << "* -*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
				if (fruit == 'o') orange.makeSale();
				else if (fruit == 'c') carrot.makeSale();
				else if (fruit == 'p') pomegranate.makeSale();
			}
			else
			{
				cout << "The amount is not enough, Collect what you deposited." << endl;
				cout << "* -*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*" << endl;
			}

		}

	}
}


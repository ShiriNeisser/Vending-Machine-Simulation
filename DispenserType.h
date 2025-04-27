/* Assignment C++: 1
   Author: Shiri Nisser, ID 209323658,
*/
#include <iostream>
#pragma once
using namespace std;
class DispenserType {
private:
	int numberOfItems;
	int cost;
public:
	DispenserType();
	DispenserType(int number_of_item, int cost_of_item);
	int getNoOfItems();
	int getCost();
	void makeSale();
	~DispenserType() {};
};
/* Assignment C++: 1
   Author: Shiri Nisser, ID 209323658,
*/
#include "DispenserType.h"
DispenserType::DispenserType()
{
	numberOfItems = 0;
	cost = 0;
}
DispenserType::DispenserType(int number_of_item, int cost_of_item)
{
	numberOfItems = number_of_item;
	cost = cost_of_item;
}

int DispenserType::getNoOfItems()
{
	return numberOfItems;
}

int DispenserType::getCost()
{
	return cost;
}
void DispenserType::makeSale()
{
	numberOfItems = numberOfItems - 1;
}
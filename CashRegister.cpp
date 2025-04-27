/* Assignment C++: 1
   Author: Shiri Nisser, ID 209323658,
*/
#include "CashRegister.h"
CashRegister::CashRegister() {
    cashOnHands = 0;
}
CashRegister::CashRegister(int money) {
    cashOnHands = money;
}
int CashRegister::getCurrentBalance()
{
    return cashOnHands;
}
void CashRegister::acceptAmount(int a)
{
    cashOnHands = cashOnHands + a;
}
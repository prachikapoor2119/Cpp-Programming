#include <iostream>
using namespace std;

float moneyReceived(int currentMoney, float factor = 1.04) // if no argument/value given in int main this default argument(value) will be taken(by default) and if a value is given in int main then that value will override this value..
{
    return currentMoney * factor;
}

int main()
{
    int money = 100000;
    cout << "If you have " << money << "Rs in your bank account,you will receive " << moneyReceived(money) << "Rs after 1 year" << endl;
    cout << "If Vip " << moneyReceived(money, 1.1);
    return 0;
}
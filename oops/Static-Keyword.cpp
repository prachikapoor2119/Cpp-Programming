#include <iostream>
using namespace std;
class Hero
{
public:
    static int TimeToComplete;
};

int Hero::TimeToComplete = 5; //imtialising

int main()
{

    cout << Hero::TimeToComplete << endl;
    Hero a;
    cout << a.TimeToComplete << endl; // not recommended
    Hero b;
    Hero::TimeToComplete = 10;
    a.TimeToComplete = 200000;

    cout << a.TimeToComplete << endl; //value updated due to above statement

    cout<< b.TimeToComplete << endl;
}
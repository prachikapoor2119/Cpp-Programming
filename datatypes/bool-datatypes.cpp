#include <iostream>
using namespace std;

int main()
{
    bool pr = false;
    cout << pr << endl;

    int a = 5;
    int b = 6;

    bool first = (a == b);
    cout << first << endl;

    bool second = (a <= b);
    cout << second << endl;

    bool third = (a >= b);
    cout << third << endl;

    bool fourth = (a > b);
    cout << fourth << endl;

    bool fifth = (a < b);
    cout << fifth << endl;

    bool sixth = (a != b);
    cout << sixth << endl;
}
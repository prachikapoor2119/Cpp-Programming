#include <iostream>
using namespace std;

int main()
{

    int a = 3;
    cout << a << endl; // this (a)  is for this block therefore outside the if condition (a) will be 3

    if (true)
    {
        int a = 5;         // this (a) is for this block therefore its printing here
        cout << a << endl; // if i doesn't give any value of (a) here it will take the initial value but since I initialised the value in this block (a) will be printed as 5..
    }

    cout << a << endl;

    if (true)
    {
        int b = 7;
        cout << b << endl; // this (b) die inside this condition it cant be accessed from outside
    }

    // cout << b << endl; // this will throw an error because (b) cant be accessed outside the if condition

}

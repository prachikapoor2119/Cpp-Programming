#include <iostream>
using namespace std;

int main()
{

    int p = 'a';
    cout << p << endl;

    char ch = 99;
    cout << ch << endl;

    // char ch1=123456;
    // cout << ch1<<endl; // cant be done bcoz of warning(error): overflow in implicit constant conversion

    char ch1 = 64;
    cout << ch1 << endl;

    int z = 2.0 / 5;
    cout << z << endl; // converted into int data type

    cout << 2.0 / 5 << endl; // will display as float
}
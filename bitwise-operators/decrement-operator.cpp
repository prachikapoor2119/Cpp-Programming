#include <iostream>
using namespace std;

int main()
{

    int i = 3;
    int a = i--;
    cout << a << endl; // post-decrement
    cout << i << endl;

    cout << endl;

    int m = 5;
    int b = --m; // pre-decrement
    cout << m << endl;
    cout << b << endl;

    cout << endl;

    int p = 8;

    cout << (--p) << endl;
    cout << (p--) << endl;
}
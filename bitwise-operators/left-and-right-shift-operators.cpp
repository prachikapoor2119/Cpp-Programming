#include <iostream>
using namespace std;

int main()
{
    int a = (5 << 2);
    cout << a << endl; // left shift

    int b = (19 << 1);
    cout << b << endl; // left shift

    int c = (21 << 2);
    cout << c << endl; // left shift

    int m = (5 >> 2);
    cout << m << endl; // right shift

    int n = (17 >> 1);
    cout << n << endl; // right shift

    int o = (17 >> 2);
    cout << o << endl; // right shift
}
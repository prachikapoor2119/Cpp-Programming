#include <iostream>
using namespace std;

int main()
{

    int i = 1;
    int a = i++; // post increment operator
    cout << i << endl;
    cout << a << endl;

    cout << endl;

    int o = 5;
    int b = 2;
    int sum = b + (o++);
    cout << sum << endl;
    cout << o;

    cout << endl;
    cout << endl;

    int p = 5;
    int c = ++p; // pre-increment
    cout << c << endl;
    cout << p << endl;

    cout << endl;

    int q = 3;
    int d = 2;
    int sum1 = d + (++q);
    cout << sum1 << endl;
    cout << q << endl;

    cout << endl;

    int s = 8;
    cout << (s++) << endl; 
    cout << (++s) << endl;
}

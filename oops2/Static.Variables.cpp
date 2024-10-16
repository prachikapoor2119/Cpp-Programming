#include <iostream>
using namespace std;
int product(int a, int b)
{
    static int c = 0;
    c = c + 1;
    return a * b + c;
}

int main()
{
    int a, b;
    cout << "Enter the value of a and b" << endl;
    cin >> a >> b;
    cout << "The product of a and b is " << product(a, b);
    cout << "The product of a and b is " << product(a, b);
    cout << "The product of a and b is " << product(a, b);
    cout << "The product of a and b is " << product(a, b);
    cout << "The product of a and b is " << product(a, b);
    cout << "The product of a and b is " << product(a, b);
    return 0;
}
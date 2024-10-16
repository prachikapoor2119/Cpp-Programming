#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int nCr(int n, int r)
{
    cout << "Enter the value of n and r" << endl;
    cin >> n >> r;
    int a = factorial(n); // calling function inside function
    int b = factorial(r);
    int c = factorial(n - r);

    int d = a / (b * c);
    return d;
}

int main()
{

    int n, r;
    int c = nCr(n, r);
    cout << c << endl;
}
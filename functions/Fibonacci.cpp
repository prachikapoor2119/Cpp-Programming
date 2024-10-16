#include <iostream>
using namespace std;

// printing fibonacci series
void printfibonacci(int n)
{

    int first = 0;
    int second = 1;
    cout << first << endl;
    cout << second << endl;

    for (int i = 2; i < n; i++)
    {

        int next = first + second;
        cout << next << endl;
        first = second;
        second = next;
    }
}

// to retrieve the ath term of the series
int fibonacci(int a)
{
    if (a == 1)
    {
        return 0;
    }

    else if (a == 2)
    {
        return 1;
    }

    int next = 0;
    int first = 0;
    int second = 1;
    for (int i = 3; i <= a; i++)
    {
        next = first + second;
        first = second;
        second = next;
    }

    return next;
}

int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    printfibonacci(n);

    int a;
    cout << "Enter the term you want to retrieve" << endl;
    cin >> a;

    if (a > n || a < 0)
    {
        cout << "Enter a value from 1 to n" << endl;
    }

    else
    {
        int result = fibonacci(a);
        cout << result << endl;
    }
}
#include <iostream>
using namespace std;

// 1 --> Prime
// 0 --> Not Prime

bool isPrime(int n)
{
    if (n == 1)
    {
        return 1;
    }

    else
    {
        for (int i = 2; i < n; i++)
        {
            // if got divided , then not a prime no.
            if (n % i == 0)
            {
                return 0;
            }
        }
    }

    return 1;
}

int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;

    if (isPrime(n))
    {
        cout << "Prime" << endl;
    }
    else
    {
        cout << "Not Prime" << endl;
    }
}
// to see for which it is prime or not prime from 2 to n-1
#include <iostream>
using namespace std;

int main()
{

    int n; 
    cout << "Enter the value of n" << endl;
    cin >> n;
    int i = 2;
    while (i < n)
    {

        if (n % i == 0)
        {
            cout << "Not prime for " << i << endl;
        }

        else
        {
            cout << "prime for " << i << endl;
        }
        i++;
    }
}
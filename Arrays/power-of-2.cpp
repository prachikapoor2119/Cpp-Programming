#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    float ans = 0;
    int i = 0;

    while (n != 0)
    {
        int bit = n & 1;
        ans = (bit * pow(10, i)) + ans; // storing ans in float bcoz pow gives floating value so it has to be stored in float to give the exact ans...

        n = n >> 1;
        i++;
    }

    cout << ans << endl;
    int a = ans;
    int sum = 0;

    while (a != 0)
    {
        int digit = a % 10;
        sum += digit;
        a /= 10;
    }
    cout << sum << endl;
    if ((sum == 1) && (ans != 0))
    {
        cout << "It is the power of 2" << endl;
    }

    else
    {
        cout << "Its not the power of 2" << endl;
    }

    return 0;
}
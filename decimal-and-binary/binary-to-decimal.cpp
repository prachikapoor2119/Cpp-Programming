#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    int ans = 0;
    int i = 0;

    while (n != 0)
    {
        int digit = n % 10;
        if (digit == 1)
        {
            ans = ans + (digit * pow(2, i)); // can remove (if) statement if want to bcoz multiplying with digit is eliminating the 0 bits automatically..
        }
        n = n / 10;
        i++;
    }
    cout << ans << endl;
}
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;

    if (n <= 1)
    {
        cout << "Prime";
    }

    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                cout << "Not Prime";
                break;
            }
            else
            {
                cout << "Prime";
                break;
            }
        }
    }
}
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i <n; i++)
    {

        cin >> arr[i];

    }
    for (int i = 1; i <= n; i++)
    {
        int m = arr[i-1];
        for (int j = 1; j <= m; j++)
        {
            if (j % 3 == 0)
            {
                cout << "Buzz" << endl;
            }
            else if (j % 5 == 0)
            {
                cout << "BigBuzz" << endl;
            }

            else if (j % 3 == 0 && j % 5 == 0)
            {
                cout << "Extreme Buzz" << endl;
            }

            else
            {
                cout << j << endl;
            }
        }
    }

    return 0;
}
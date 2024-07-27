#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the value of n " << endl;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        // print space first
        int space = 0;
        while (space < i - 1)
        {
            cout << " ";
            space++;
        }

        // print stars

        int j = 1;
        while (j <= n - i + 1)
        {
            cout << "*";
            j++;
        }

        cout << endl;
        i++;
    }
}

// example for n=5

                    //  *****
                    //   ****
                    //    ***
                    //     **
                    //      *
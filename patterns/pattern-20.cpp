#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        // print spaces first
        int space = n - i;
        while (space>0)
        {
            cout << " ";
            space--;
        }

        // now print stars
        int j = 1;

        while (j <= i)
        {
            cout << "*";
            j++;
        }

        cout << endl;
        i++;
    }
}

// example for n=5

            //       *
            //      **
            //     ***
            //    ****
            //   *****
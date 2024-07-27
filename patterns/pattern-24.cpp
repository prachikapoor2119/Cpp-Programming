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

        int space = n - i;
        while (space > 0)
        {
            cout << " ";
            space--;
        }
        // now numbers
        int j = 1;
        while (j <= i)
        {
            cout << i;

            j++;
        }

        cout << endl;
        i++;
    }
}


// example for n=5

            //        1
            //       22 
            //      333 
            //     4444 
            //    55555
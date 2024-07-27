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
        // print spaces first

        int space = 0;
        while (space < i - 1)
        {
            cout << " ";
            space++;
        }

        // print numbers

        int j = 1;
        while (j <= n - i + 1)
        {
            cout << i;
            j++;
        }

        cout << endl;
        i++;
    }
}

// example for n=5

//    11111
//     2222
//      333
//       44
//        5
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
        int value = i;
        int j = 1;
        char ch = 'A' + i + j - 2;
        while (j <= n)
        {
            cout << ch << " ";
            ch++;
            j++;
        }
        cout << endl;
        i++;
    }
}

// example for n=5

            //  A B C D E
            //  B C D E F
            //  C D E F G
            //  D E F G H
            //  E F G H I
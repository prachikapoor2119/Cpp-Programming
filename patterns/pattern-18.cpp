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
        int j = 1;
        char start = 'A' + n - i;
        while (j <= i)
        {
            cout << start << " ";
            start++;
            j++;
        }

        cout << endl;
        i++;
    }
}

// example for n=5

            //  E
            //  D E
            //  C D E
            //  B C D E
            //  A B C D E
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
        char ch = 'A';  // or we can use ch='A'+j-1  , both will work
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

                // A B C D E
                // A B C D E
                // A B C D E
                // A B C D E
                // A B C D E
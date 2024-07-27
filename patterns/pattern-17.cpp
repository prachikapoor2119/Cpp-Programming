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
        char ch = 'A' + i + j - 2;
        while (j <= i)
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

            //    A
            //    B C
            //    C D E
            //    D E F G
            //    E F G H I
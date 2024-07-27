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
        int j = 1;
        while (j <= n)
        {
            cout << i ;
            j++;
        }

        cout << endl;
        i++;
    }
}

// example for n=5
//          11111
//          22222
//          33333
//          44444
//          55555

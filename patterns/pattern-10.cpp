#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n " <<endl;
    cin >> n;

    int i = 1;

    while (i <= n)
    {
        int j = i;

        while (j >= 1)
        {
            cout << j << " ";
            j--;
        }

        cout << endl;
        i++;
    }

    return 0;
}


// example for n=5

//         1
//         2 1
//         3 2 1
//         4 3 2 1
//         5 4 3 2 1



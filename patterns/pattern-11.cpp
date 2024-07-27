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
        char ch = 'A' + i - 1;
        int j = 1;
        while (j <= n)
        {

            cout << ch << " ";

            j++;
        }

        cout << endl;
        i++;
    }
}


// example for n=5

//         A A A A A
//         B B B B B
//         C C C C C
//         D D D D D
//         E E E E E
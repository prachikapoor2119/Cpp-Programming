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
        int j = n;
        while (j >= 1)
        {
            cout << j;
            j--;
        }

        cout << endl;
        i++;
    }
}


// example for n:-5

        //    54321 
        //    54321 
        //    54321 
        //    54321 
        //    54321
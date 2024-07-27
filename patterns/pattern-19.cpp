#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;

    int i = 1;
    int count = n * n;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << count << " ";
            count--;
            j++;
        }

        cout << endl;
        i++;
    }
}

// example for n=5

                    //  25 24 23 22 21 
                    //  20 19 18 17 16 
                    //  15 14 13 12 11 
                    //  10 9 8 7 6 
                    //  5 4 3 2 1
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

        while (j <= i)
        {
            cout << i <<" " ;
            j++;
        }
        cout << endl;
        i++;
    }
}

// example for n=5

                // 1
                // 2 2 
                // 3 3 3 
                // 4 4 4 4 
                // 5 5 5 5 5

                //upper triangle using numbers
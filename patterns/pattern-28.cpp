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
        while (j <= n - i + 1)
        {
            cout << j;
            j++;
        }

        j = 1;
        while (j <= (i - 1) * 2)
        {
            cout << "*";
            j++;
        }

        j = n - i + 1;
        while(j>=1){
            cout << j;
            j--;
        }

        cout << endl;
        i++;
    }
}

// example for n=5

                        //  1234554321 
                        //  1234**4321 
                        //  123****321 
                        //  12******21 
                        //  1********1

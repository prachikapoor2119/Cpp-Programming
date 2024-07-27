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
        // print space(1st triangle)

        int space = n - i;
        while (space > 0)
        {
            cout << " ";
            space--;
        }

        // print 2nd triangle
        int j = 1;
        while (j <= i)
        {
            cout << j;
            j++;
        }

        //print 3rd triangle

        int start = i -1;
        while (start)
        {
            cout << start;
            start--;
        }

        cout << endl;
        i++;
    }
}

// example for n=5

                //     1 
                //    121
                //   12321 
                //  1234321 
                // 123454321
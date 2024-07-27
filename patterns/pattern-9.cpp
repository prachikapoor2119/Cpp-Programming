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
        int value = i; // have to declare value to the value of rows bcoz we can't print the rows directly bcoz it will behave as incrementing the rows two times.. we can read the rows but can't print it in this code because it will disturb the flow of code bcoz incrementing it two times..
        while (j <= i)
        {
            cout << value << " ";
            value++;
            j++;
        }

        cout << endl;
        i++;
    }
}

// example for n=5

//  1
//  2 3
//  3 4 5
//  4 5 6 7
//  5 6 7 8 9



// second method for same code

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
        int j = i;

        while (j < i * 2)
        {
            cout << j << " ";

            j++;
        }

        cout << endl;
        i++;
    }
}

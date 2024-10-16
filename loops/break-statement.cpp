
#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    int i = 1;
    for (;;)
    {
        if (i <= n)
        {
            cout << i << endl;
        }
        else
        {
            break; // will prevent the loop from going in infinite loop by breaking the loop after condition gets false.
        }
        i++;
    }
}
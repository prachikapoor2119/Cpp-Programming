#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Hi" << endl;
        cout << "Hey" << endl;
        continue;
        cout << "Helloo"; //due to continue statement this part becomes unreachable.. 
    }
}
#include <iostream>
using namespace std;

// 1 for even
// 0 for odd
bool isEven(int a)
{
    if (a & 1)
    {
        return 0;
    }

    else
    {
        return 1;
    }
}

int main()
{

    int a;
    cout << "Enter the value of a" << endl;
    cin >> a;
    if (isEven(a))
    {
        cout << "Even" << endl;
    }

    else
    {
        cout << "Odd" << endl;
    }
}
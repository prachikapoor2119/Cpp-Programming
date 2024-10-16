#include <iostream>
using namespace std;

int power(int a, int b)// local variables of power function
{
    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }

    cout << a << endl;
    return ans;
}

int main()
{

    int a, b; //local variables of main()
    cout << "Enter the value of a and b" << endl;
    cin >> a >> b;
    int c = power(a, b);
    cout << c << endl;
}